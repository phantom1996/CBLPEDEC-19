// array-sum
#include <iostream>
using namespace std;

int Array_sum(int a[],int n,int i=0){
	//base case 
	if(i==n){
		return 0;
	}
	//recursive case
	int sum=a[i]+Array_sum(a,n,i+1);//assumption;
	return sum;
}


int Array_sum2(int *a,int n){
	//base case
	if(n==0){
		return 0;
	}
	//recursive case
	int sum=*a+Array_sum2(a+1,n-1);
	return sum;
}


int power(int n,int x){
	if(x==0){
		return 1;
	}

	int ans=n*power(n,x-1);
	return ans;

}

void lr(int a[],int n,int i=0){
	//base case
	if(i==n){
		return;
	}
	cout<<a[i]<<" ";
	lr(a,n,i+1);
}

void rl(int a[],int n,int i=0){
	//base case
	if(i==n){
		return;
	}
	rl(a,n,i+1);
	cout<<a[i]<<" ";

}

void rp(int *a,int n){
	//base case
	if(n==0){
		return;
	}

	rp(a+1,n-1);
	cout<<*a<<endl;



}






int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);


	// int ans=Array_sum2(a,n);
	// cout<<ans;
	// int n,x;
	// cin>>n>>x;
	// int ans=power(n,x);
	// cout<<ans;	

	// lr(a,n);
	// cout<<endl;
	// rl(a,n);
	rp(a,n);
	return 0;
}