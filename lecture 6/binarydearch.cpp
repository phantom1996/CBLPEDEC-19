// binarydearch
#include <iostream>
using namespace std;

int main()
{
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(int);

	int start=0;
	int end=n-1;
	int key=0;
	while(start<=end){
		int mid=(start+end)/2;
		if(a[mid]==key){
			cout<<"FOUND AT INDEX "<<mid;
			break;
		}
		else if(key<a[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}

	if(start>end){
		cout<<start<<" "<<end<<endl;
		cout<<"NOT FOUND"<<endl;
	}








	
	return 0;
}