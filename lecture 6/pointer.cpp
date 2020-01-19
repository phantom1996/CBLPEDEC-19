// pointer
#include <iostream>
using namespace std;

int main()
{
	// int y=10;
	// cout<<&y<<endl;
	// float z=15;
	// cout<<&z;	


	// int a[]={1,2};
	// cout<<a<<endl;
	// cout<<&a<<endl;
	// cout<<&a[0]<<endl;



	int x=10;
	int *xptr;
	xptr=&x;
	cout<<sizeof(xptr)<<endl;
	//cout<<&x<<endl;
	//cout<<xptr<<endl;

	float y=20;
	float *yptr=&y;
	cout<<sizeof(yptr)<<endl;
//	cout<<yptr<<endl;
char *c;
cout<<sizeof(c)<<endl;

	return 0;
}