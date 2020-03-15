// queueusingLL
#include <iostream>
using namespace std;

class node{

public:
	int data;
	node* next;
	node(int x){
		data=x;
		next=NULL;
	}

};

class queue{
public:
	node* head;
	int size;
	queue(){
		head=NULL;
		size=0;
	}

	void push(int x){
		node *newnode=new node(x);
		if(head==NULL){
			head = newnode;
		}
		else{
			node* temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}
		size++;
	}
	int front(){
		if(size>0)
			return head->data;
		else
			return -1;
	}

	void pop(){
		node* temp=head;
		head=head->next;
		delete temp;
		size--;
	}
	bool empty(){
		return size==0;
	}
	int queuesize(){
		return size;
	}
};
int main()
{

	queue q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	cout<<q.front()<<endl;
	q.pop();
	cout<<q.front()<<endl;
	q.pop();
	cout<<boolalpha<<q.empty()<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}

	
	return 0;
}