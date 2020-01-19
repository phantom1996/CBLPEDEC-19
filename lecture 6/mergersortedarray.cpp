// mergersortedarray
#include <iostream>
using namespace std;

void input1(int a[],int x){
	for(int i=0;i<x;i++){
		cin>>a[i];
	}
}

void merge(int a1[],int a2[],int m, int n){

	int i=m-1;
	int j=n-1;
	int k=m+n-1;

	while(i>=0 && j>=0){
		if(a1[i]>a2[j]){
			a1[k]=a1[i];
			i--;
			k--;
		}
		else{
			a1[k]=a2[j];
			j--;
			k--;
		}
	}

	if(j>=0){
		while(j>=0){
			a1[k]=a2[j];
			k--;
			j--;
		}
	}


}





int main()
{
	int m,n,a1[1000],a2[1000];
	cin>>m>>n;
	input1(a1,m);
	input1(a2,n);
	merge(a1,a2,m,n);
	for(int i=0;i<m+n;i++){
		cout<<a1[i]<<" ";
	}


	return 0;
}