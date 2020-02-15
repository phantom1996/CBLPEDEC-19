// Dma
#include <iostream>
using namespace std;

int main()
{

	// int *ptr=new int;
	// *ptr=10;
	// cout<<ptr<<endl;
	// // cout<<*ptr<<endl;
	// int n;cin>>n;
	// int *a=new int[n];
	// // for(int i=0;i<n;i++){
	// 	a[i]=i*i;
	// }
	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

	// delete

//integer deletion
	// delete ptr;

// array deletion
	// delete []a;

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }


	int r,c;
	cin>>r>>c;
	int **a=new int*[r];
	for(int i=0;i<r;i++){
		a[i]=new int[c];
	}
	int val=1;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=val;
			val++;
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){	
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	// delete 2d array
	for(int i=0;i<r;i++){
		delete []a[i];
	}
	delete []a;
	





	return 0;
}