// derefrencing operator
#include <iostream>
using namespace std;

int main()
{
		// int x=10;
		// int *p=&x;
		// cout<<p<<endl;
		// cout<<*p<<endl;

	int x;
	x=10;
	int y=20;
	int *p=&x;
	//cout<<p<<endl;
	p=&y;
	//cout<<p<<endl;

//cout<<*p;

*p=*p+4;
cout<<*p<<endl;







	return 0;

}