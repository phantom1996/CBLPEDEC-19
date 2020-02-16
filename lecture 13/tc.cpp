// tc
#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

void bubblesort(int a[],int n){
	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
}
}
void mergearray(int *a,int *x,int *y,int s,int e){
	int mid=(s+e)/2;
	int i=s;
	int j=mid+1;
	int k=s;
	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k]=x[i];
			k++;
			i++;
		}
		else{
			a[k]=y[j];
			k++;
			j++;
		}
	}
	if(i<=mid){
		while(i<=mid){
			a[k]=x[i];
			k++;
			i++;
		}
	}
	if(j<=e){
		while(j<=e){
			a[k]=y[j];
			k++;
			j++;
		}
	}
}




void mergesort(int *a,int start,int end){

	//base case

	if(start>=end){
		return;
	}
	//divide
	int x[100000];
	int y[100000];
	int mid=(start+end)/2;

	for(int i=start;i<=mid;i++){
		x[i]=a[i];
	}
	for(int j=mid+1;j<=end;j++){
		y[j]=a[j];
	}
	//left array
	mergesort(x,start,mid);
	//right array
	mergesort(y,mid+1,end);
	//merge
	mergearray(a,x,y,start,end);


}


int main()
{
	int a[100000];
	int n;cin>>n;
	for(int i=n-1;i>=0;i--){
		a[n-i-1]=i;
	}
	clock_t t1;
	t1=clock();
	bubblesort(a,n);
	t1=clock()-t1;
	cout<<"Time Taken by bubble sort "<<t1<<" millisec "<<endl;
	for(int i=n;i>=0;i--){
		a[n-i-1]=i;
	}
	t1=clock();
	sort(a,a+n);
	t1=clock()-t1;
	cout<<"Time Taken by merge sort "<<t1<<" millisec "<<endl;	
	return 0;
}