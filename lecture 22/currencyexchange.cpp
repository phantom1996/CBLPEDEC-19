// currencyexchange
#include <iostream>
using namespace std;
int currency(int *coins,int n,int amount){
	if(amount==0){
		return 0;
	}

	int ans=INT_MAX;

	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int op=currency(coins,n,amount-coins[i]);
			ans=min(ans,op+1);
		}
	}

return ans;

}
int topdown(int *coins,int n,int amount,int *dp){
	if(amount==0){
		dp[amount]=0;
		return 0;
	}

	int ans=INT_MAX;
	if(dp[amount]!=-1){
		return dp[amount];
	}

	for(int i=0;i<n;i++){
		if(amount-coins[i]>=0){
			int op=topdown(coins,n,amount-coins[i],dp);
			ans=min(ans,op+1);
		}
	}

dp[amount]=ans;
return ans;

}



int main()
{
	int coins[]={1,7,10};

	int n=sizeof(coins)/sizeof(int);
	int amount;
	cin>>amount;
	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}
	cout<<topdown(coins,n,amount,dp);

	
	return 0;
}