// scopeofavariable
#include <iostream>
using namespace std;
int t=10;
int main()
{
	//cout<<t;
	int t=2;
	int x=1;
	int i;
	for(i=1;i<5;i++){
		int x;
		x=i;
		//cout<<x<<" ";
	}
	cout<<::t;


	return 0;
}