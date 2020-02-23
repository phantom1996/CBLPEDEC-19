// ll
#include <iostream>
using namespace std;

class node{
public:
	int data;
	node *next;

	node(int x){
		data=x;
		next=NULL;
	}


};

class linklist{
public:
	node *head;
	node *tail;

	linklist(){
		head=NULL;
		tail=NULL;
	}

	void insertAtfront(int x){
		if(head==NULL){
			head=new node(x);
			tail=head;
		}
		else{
			node *temp=new node(x);
			temp->next=head;
			head=temp;
		}
	}

	void print(){
		node *temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"--> ";
			temp=temp->next;
		}

	}
	//Insertion as front of link list
	void insertAtEnd(int x){
		if(head==NULL){
			head=new node(x);
			tail=head;
		}
		else{
			node* temp=new node(x);
			tail->next=temp;
			tail=temp;
		}
	}
};