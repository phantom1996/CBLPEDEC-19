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

	 }

	 void print(){
	 	for(int i=0;i<table_size;i++){
	 		node* temp=table[i];
	 		while(temp!=NULL){
	 			cout<<"( "<<temp->key<<" "<<temp->value<<" )-->";
	 		}
	 		cout<<endl;
	 	}
	 }

	 //search
	 int search(string key){

	 }

	 int currentsizooftable(){
	 	return current_size; 
	 }
	 int Mytable_size(){
	 	return table_size;
	 }
	
};







