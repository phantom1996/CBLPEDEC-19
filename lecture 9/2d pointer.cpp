// 2d pointer
#include <iostream>
using namespace std;

int main()
{
	int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
	cout<<a<<endl;
	//cout<<*(a[0])<<endl;
	cout<<**(a+1)<<endl;
	cout<<&a[1][0]<<endl;
	return 0;
}