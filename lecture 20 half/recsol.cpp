// recsol
#include<iostream>
using namespace std;
int index(int a[],int n,int m,int i){
	//base case
	if(i==n){
		return -1;
	}
	//recursive call

		if(a[i]==m)
			return i;
    return index(a,n,m,i);
}
int main()
{
	int n,m,i;
	int a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	int ans =index(a,n,m,0);
	cout<<ans;

	return 0;
}
