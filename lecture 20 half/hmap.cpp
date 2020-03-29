// hmap
#include <iostream>
#include<string>
using namespace std;
class node{

public:
	string key;
	int value;
	node *next;

	node(string mykey,int val){
		key=mykey;
		value=val;
		next=NULL;
	}

};


class Hashtable(){

	node** table;
	int current_size;
	int table_size;


public:
	Hashtable(int ts){
		table_size=ts;
		current_size=0;
		table=new node*[table_size];
		for(int i=0;i<table_size;i++){
			table[i]=NULL;
		}
	}



};





