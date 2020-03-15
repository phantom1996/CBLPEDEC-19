// queue using stack
#include <iostream>
#include <stack>
using namespace std;
template <typename T>
class queue{
public:
	stack<T> s1;
	stack<T> s2;
	int cnt;
	queue(){
		cnt=0;
	}
	void push(T x){
		s1.push(x);
		cnt++;

	}
	void pop(){
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		s2.pop();
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}
		cnt--;
	}
	bool empty(){
		return cnt==0;
	}
	T front(){
		T x;
		if(cnt==0){
			return -1;
		}
		else{
		while(!s1.empty()){
			s2.push(s1.top());
			s1.pop();
		}
		x=s2.top();
		while(!s2.empty()){
			s1.push(s2.top());
			s2.pop();
		}			
		}
		return x;
	}
	int size(){
		return cnt;
	}

};



int main()
{
	queue<int> q;
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