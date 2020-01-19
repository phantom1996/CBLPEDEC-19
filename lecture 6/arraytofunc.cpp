// arraytofunc
#include <iostream>
using namespace std;
void change(int a[],int n){
	for(int i=0;i<n;i++){
		a[i]=i;
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}


int main()
{
	int a[]={5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);
	change(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}