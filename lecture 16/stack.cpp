// stack
#include <iostream>
#include <stack>
using namespace std;

int main()
{
	//symatx
	// stack<type>name;
	stack<char>s;
	for(int i=0;i<4;i++){
		s.push(i);
	}
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}


	
	return 0;
}