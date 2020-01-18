// optimized1bubblesort
// bubble sort
// logicalexp
#include <iostream>
using namespace std;
int main()
{

	int a[]={1,5,4,3,2};


	int n=5;
	bool kyaifmeingya=false;
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2;j++){
			if(a[j]>a[j+1]){
				kyaifmeingya=true;
				swap(a[j],a[j+1]);
			}
		}
		if(kyaifmeingya==false){
			break;
		}

	/*	for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;*/
	}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}


	return 0;
}