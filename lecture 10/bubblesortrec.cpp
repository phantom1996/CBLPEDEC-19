// bubblesortrec
#include <iostream>
using namespace std;

void bubblesortrec(int *a,int n,int i){
	// base case
	if(i==n-1){
		return;
	}
	// one time work
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			swap(a[j],a[j+1]);
		}
	}
	//recursive case
	bubblesortrec(a,n,i+1);

}


int main()
{
	int a[]={5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);
	bubblesortrec(a,n,0);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}