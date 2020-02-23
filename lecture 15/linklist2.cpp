// linklist2
#include <iostream>
#include "ll.h"
using namespace std;

node* lastposele(node* head,int pos){
	node* temp=head;
	int cnt=0;
	while(cnt<pos){
		temp=temp->next;
		cnt++;
	}
	while(temp!=NULL){
		temp=temp->next;
		head=head->next;
	}
	return head;
}

node* reverseLL(node* head){
	node* Next=head;
	node* curr=head;
	node* prev=NULL;
	while(Next!=NULL){
		Next=curr->next;//avoid loss of ll
		curr->next=prev;
		prev=curr;
		curr=Next;
	}
	return prev;



}







int main()
{
	linklist l;
	for(int i=1;i<=10;i++){
		l.insertAtEnd(i);
	}
	// int pos;cin>>pos;
	// node *ans=lastposele(l.head,pos);
	// cout<<ans->data;
	l.head=reverseLL(l.head);
	l.print();
	
	return 0;
}