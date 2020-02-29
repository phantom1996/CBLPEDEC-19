// stack class using ll
#include <iostream>
using namespace std;
template<typename T>
class node{
public:s.push('A');
	T data;
	node* next;
	node(T x){
		data=x;
		next=NULL;
	}
};
template<typename T>
class stack{

public:
	node<T>* head;
	int cnt;
	stack(){
		head=NULL;
		cnt=0;
	}
	void push(T d){
		//insertion at head
		node<T> *temp=new node<T>(d);
		if(head==NULL){
			head=temp;
		}
		else{
			temp->next=head;
			head=temp;
		}
		cnt++;
	}
	void pop(){
		//delete from head;
		if(cnt==0){
			return;
		}
		node<T>* temp=head;
		head=head->next;
		delete temp;
		cnt--;
	}
	T top(){
		if(cnt!=0)
			return head->data;
		return T(0);
	}
	bool is_empty(){
		return cnt==0;
		/*if(cnt==0){
			return true;
		}
		else{
			return false;
		}*/
	}
	int size(){
		return cnt;
	}

};



int main()
{
	stack<char>s;
	s.push('A');
	s.push('B');
	s.push('C');
	/*for(int i=0;i<5;i++){
		s.push(i);
	}*/
	cout<<s.size()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;




	
	return 0;
}