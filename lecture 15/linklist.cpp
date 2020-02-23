// linklist
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
//iNSERTION AT THE END IF THE LINK LIST
	void insertAtMid(int x,int pos){
		if(pos==0){
			insertAtfront(x);
		}
		else if(pos>length()){
			insertAtEnd(x);
		}
		else{
			node* move=head;
			int moveno=1;
			while(moveno<pos-1){
				move=move->next;
				moveno++;
			}
			node* temp=new node(x);
			temp->next=move->next;
			move->next=temp;
		}
	}
	// FIND ELEMENT AT THE END OF LINK LIST
	bool findelementhelper(node* head,int x){
		//base condition
		if(head==NULL){
			return false;
		}
		else if(head->data==x){
			return true;
		}
		else{
			return findelementhelper(head->next,x);
		}
	}

	bool findele(int x){
		return findelementhelper(head,x);
	}

// FIND THE LENGHT OF THE LINK LIST

	int length(){
		int cnt=0;
		node* temp=head;
		while(temp!=NULL){
			cnt++;
			temp=temp->next;
		}
		return cnt;
	}
	//DELETE AT THE FRONT OF LINK LIST

	void deleteatfront(){
		if(head==NULL){
			return;
		}
		else{
			node* temp=head;
			head=head->next;
			delete temp;
		}
	}

	//DELETE AT THE END OF LINK LIST
	void deleteatend(){
		if(head==NULL){
			return;
		}
		else{
			node* temp=head;
			while(temp->next!=tail){
				temp=temp->next;
			}
			delete tail;
			temp->next=NULL;
			tail=temp;

		}
	}
//DELETE FROM THE MID OF THE LINK LIST

	void deleteatmid(int pos){
		if(pos==0){
			deleteatfront();
		}
		else if(pos>length()){
			deleteatend();
		}
		else{
			int moveno=1;
			node* temp=head;
			while(moveno<pos-1){
				moveno++;
				temp=temp->next;
			}
			node* d=temp->next;
			temp->next=temp->next->next;
			delete d;

		}
	}
//FIND THE MID OF THE ELEMENT 

	/*node* findmid(){
		node* fastptr=head->next;
		node* slowptr=head;
		while(fastptr!=NULL && fastptr->next!=NULL){
			fastptr=fastptr->next->next;
			slowptr=slowptr->next;
		}
		return slowptr;
	}*/

};
	node* findmid(node* head){
		node* fastptr=head->next;
		node* slowptr=head;
		while(fastptr!=NULL && fastptr->next!=NULL){
			fastptr=fastptr->next->next;
			slowptr=slowptr->next;
		}
		return slowptr;
	}
//MERGE TWO SORTED LINK LIST

node *mergeLL(node* a,node* b){
	if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}
	node* c;
	if(a->data<b->data){
		c=a;
		c->next=mergeLL(a->next,b);
	}
	else{
		c=b;
		c->next=mergeLL(a,b->next);
	}
	return c;
}
//MERGESORT USING LINK LIDSTST
node* mergesort(node * head){
	//base case
	if(head==NULL || head->next==NULL){
		return head;
	}
	node *mid=findmid(head);
	node *a=head;
	node *b=mid->next;
	mid->next=NULL;
	a=mergesort(a);
	b=mergesort(b);
	node *newhead=mergeLL(a,b);
	return newhead;


}






int main()
{
	linklist l;
	linklist l1;
	l.insertAtEnd(10);
	l.insertAtEnd(9);
	l.insertAtEnd(8);
	l.insertAtEnd(7);
	l.insertAtEnd(6);
	l.insertAtEnd(5);
	l.insertAtEnd(4);
	l.insertAtEnd(3);
	l.insertAtEnd(2);
	l.insertAtEnd(1);
	l.print();
	cout<<endl;

	//l.head=mergesort(l.head);
	// l1.insertAtEnd(2);
	// l1.insertAtEnd(4);
	// l1.insertAtEnd(6);
//	l1.head=mergeLL(l.head,l1.head);
	// for(int i=1;i<=10;i++){
	// 	l.insertAtfront(i);
	// }
	// for(int i=1;i<=11;i++){
	// 	l.insertAtEnd(i);
	// }
//	int x=l.length();
//	cout<<x<<endl;
	//l.insertAtMid(11,3);
	//l.deleteatfront();
	//l.deleteatend();
	//cout<<boolalpha<<l.findele(5)<<endl;

//	l.deleteatmid(3);
	//node *ans=l.findmid();
	//cout<<ans->data<<endl;
	l.print();
	// cout<<endl;
	// l1.print();

	
	return 0;
}