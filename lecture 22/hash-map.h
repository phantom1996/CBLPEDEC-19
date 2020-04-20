// hash-map
#include <iostream>
#include<string>
using namespace std;

class node{

public:
	string key;
	int value;
	node* next;

	node(string k,int val){
		key=k;
		value=val;
		next=NULL;
	}
};


class HashMap
{
	node **table;
	int table_size;
	int current_size;

	void Rehash(){

		node** oldtable=table;
		int ots=table_size;
		table_size=2*table_size;

		table=new node*[table_size];
		for(int i=0;i<table_size;i++){
			table[i]=NULL;
		}
		current_size=0;

		//elemet copy from oldtable to ew tale

		for(int i=0;i<ots;i++){
			node* temp=oldtable[i];
			while(temp!=NULL){
				Insert(temp->key,temp->value);
				temp=temp->next;
			}

			if(oldtable[i]!= NULL){
				delete oldtable[i];
			}
		}

		delete []oldtable;





	}


public:
	 HashMap(int x=7){
	 	current_size=0;
	 	table_size=x;
	 	table=new node*[table_size];
	 	for(int i=0;i<table_size;i++){
	 		table[i]=NULL;
	 	}


	 }
//char array len strlen(a)
	 int hashfunc(string key){
	 	int index=0;
	 	int myval=1;

	 	for (int i = 0;i < key.length();i++)
	 	{
	 		index=index+(key[i]*myval)%table_size;
	 		myval=(myval*27)%table_size;
	 	}

	 	return index%table_size;

	 }



	 void Insert(string key,int val){
	 	//insertion
	 	int index=hashfunc(key);
	 	//insertion table[index]
	 	node* n=new node(key,val);
	 	//insertion in table
	 	n->next=table[index];
	 	table[index]=n;

	 	current_size++;

	 	float load_factor=current_size/(1.0*table_size);
	 	if(load_factor>=0.7){
	 		Rehash();
	 	}

	 }

	 void print(){
	 	for(int i=0;i<table_size;i++){
	 		node* temp=table[i];
	 		cout<<i<<"-->";
	 		while(temp!=NULL){
	 			cout<<"( "<<temp->key<<" "<<temp->value<<" )-->";
	 			temp=temp->next;
	 		}
	 		cout<<endl;
	 	}
	 }

	 //search
	 int search(string key1){
	 	int index=hashfunc(key1);
	 	node* t=table[index];
	 	while(t!=NULL){
	 		if(t->key==key1){
	 			return t->value;
	 		}
	 		t=t->next;
	 	}
	 	return -1;
	 }

	 int currentsizooftable(){
	 	return current_size; 
	 }
	 int Mytable_size(){
	 	return table_size;
	 }
	
};







