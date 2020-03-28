//ptr
#include <iostream>
using namespace std;

int main()
{
	int a[]={1,2,3};
	if(*a<*(a+1)){
		cout<<"true";
	}
	
	return 0;
}