// queue stl
#include <iostream>
#include <queue>
using namespace std;

int main()
{

	// push //pop//front//empty

	queue<int> q; //syntax
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