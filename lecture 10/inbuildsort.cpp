// inbuildsort
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int x,int y){
	cout<<"Compare "<<x<<" "<<y<<endl;
	return x>y;
}

int main()
{
	int a[]={5,2,4,3,1};
	int n=sizeof(a)/sizeof(int);

	//syntax //
	sort(a,a+n,compare);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}



	
	return 0;
}