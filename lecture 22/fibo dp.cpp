// fibo dp
#include <iostream>
using namespace std;

int fibo(int n)
{
	if(n==0 || n==1){
		//store
		return n;
	}
	int ans=fibo(n-1)+fibo(n-2);
	//store
	return ans;
}
long long int topdown(int n,long long int dp[]){

	if(n==0  || n==1){
		dp[n]=n;
		return dp[n];
	}
	//check if already calculate then retur from here

	if(dp[n]!=-1){
		return dp[n];
	}

	long long int ans=topdown(n-1,dp)+topdown(n-2,dp);
	dp[n]=ans;
	return dp[n];

}

long longint Bottomup(int n,long long int dp[]){
	//ini
	dp[0]=0;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}

int main()
{
long long	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}
	//cout<<fibo(50,dp);
	//cout<<topdown(50,dp);
	cout<<Bottomup(50,dp);
	return 0;
}