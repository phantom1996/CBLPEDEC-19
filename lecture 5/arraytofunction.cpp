// arraytofunction
#include <iostream>
using namespace std;

int arraysum(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
	}
	return sum;
}


int main()
{
	int a[10]={1,2,3,4,5};
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	int x=sizeof(a)/sizeof(int);
	int n=5;
	cout<<arraysum(a,n);
	
	return 0;
}