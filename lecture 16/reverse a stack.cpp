// reverse a stack
#include <iostream>
#include <stack>
using namespace std;
void pushintostack(stack<int> &s,int topele){
	if(s.empty()){
		s.push(topele);
		return;
	}
	int x=s.top();
	s.pop();
	pushintostack(s,topele);
	s.push(x);
}


void reversestack(stack<int> &s){
	if(s.empty()){
		return;
	}
	int topele=s.top();
	s.pop();
	reversestack(s);
	pushintostack(s,topele);
}

int main()
{
	stack<int>s;
	for(int i=0;i<4;i++){
		s.push(i);
	}
		while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
		for(int i=0;i<4;i++){
		s.push(i);
	}
	reversestack(s);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
	
	return 0;
}