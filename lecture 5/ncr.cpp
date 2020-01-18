// ncr
#include <iostream>
using namespace std;

int FACT(int n){

	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}

int ncr(int n,int r){
	int ans;
	int a,b,c;
	//a=FACT(n);
	//b=FACT(n-r);
	//c=FACT(r);
	ans=FACT(n)/(FACT(n-r)*FACT(r))''
	return ans;
}

int main()
{

	int n,r;
	cin>>n>>r;
	int ans=ncr(n,r);
	cout<<ans;
	
	return 0;
}