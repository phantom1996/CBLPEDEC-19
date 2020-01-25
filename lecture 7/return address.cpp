// return address
#include <iostream>
using namespace std;

int *func(){
	int x=10;
	int *ptr=&x;
	return ptr;
}



int main()
{

	int *p=func();
	cout<<p<<endl;
	cout<<*p<<endl;

	return 0;
}