// selection sort
#include <iostream>
using namespace std;

int main()
{
	int a[]={4,0,1,3,2};
	//selection sort;
	int n=5;
	for(int i=0;i<n;i++){
		//int smallest=i;//index
		int smallest=i;
		//int index;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[smallest]){
				smallest=j;
			}
		}
		swap(a[i],a[smallest]);
		/*int c=a[i];
		a[i]=smallest;
		a[smallest]=c;*/
	}


for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
	
	return 0;
}