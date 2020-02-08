// mergesort
#include <iostream>
using namespace std;

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
	int x[100];
	int y[100];
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

	int a[]={5,2,4,3,1};
	int n=sizeof(a)/sizeof(int);

	mergesort(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}


	
	return 0;
}