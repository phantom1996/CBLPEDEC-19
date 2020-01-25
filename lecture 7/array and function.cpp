// array and function
#include <iostream>
using namespace std;
void func(int *a,int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<*(a+i)<<" ";
		cout<<a[i]<<" ";
	}
}
int sum(int *a,int n){
	int s=0;
	for(int i=0;i<n;i++){
		s=s+*(a+i);
	}
	return s;
}



int main()
{
	// int *ptr=NULL;
	// cout<<*ptr;

	int a[]={1,2,3,4,5};
	int *p=a;
	int n=5;
	cout<<*(p++)<<endl;
	//cout<<*(a++)<<endl;
	cout<<*(++p)<<endl;
	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(p)<<endl;
	// cout<<a<<endl;
	// cout<<p<<endl;
	// cout<<&a[0];


	//cout<<*(p+2)<<endl;
	//cout<<*(a+2)<<endl;
	/*for(int i=0;i<5;i++){
		//cout<<a[i];
		cout<<*(a+i)<<" ";
	}*/




	//func(a,n);
	// cout<<sum(a,n)<<endl ;
	// cout<<sum(a+1,n-1)<<endl;
	// cout<<sum(a+3,n-3)<<endl;

	return 0;
}