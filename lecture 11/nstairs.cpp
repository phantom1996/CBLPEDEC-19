// nstairs

#include <iostream>
using namespace std;

int nstairs(int n,int k){
	//base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=nstairs(n-i,k);
	}
	// int ans=nstairs(n-1,k)+nstairs(n-2,k)+nstairs(n-3,k);
	// return ans;
	return ans;
}




int main()
{

	int n,k;
	cin>>n;
	cin>>k;
	int ans=nstairs(n,k);
	cout<<ans;


	
	return 0;
}