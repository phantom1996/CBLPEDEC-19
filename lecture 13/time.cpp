// time
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

int main()
{
	int a[10000];
	int n=10000;
	for(int i=9999;i>=0;i--){
		a[n-i-1]=i;
	}
	clock_t t1;
	t1=clock();
	sort(a,a+n);
	t1=clock()-t1;
	cout<<t1;

	
	return 0;
}