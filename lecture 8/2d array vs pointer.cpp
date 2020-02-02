// 2d array vs pointer
// inbuid
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int a1[]={1, 2,3};
	cout<<a1<<" "<<&a1<<endl;
	// cout<<a<<" "<<&a[0]<<endl;
	//cout<<&a+1;	


	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	cout<<a<<endl;
	// cout<<a+1<<endl;
	// cout<<&a[0][1]<<endl;
	// cout<<&a[1][0]<<endl;
	cout<<&a<<endl;

	return 0;
}





