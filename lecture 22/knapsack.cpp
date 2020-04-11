// knapsack
#include <iostream>
using namespace std;


int Knapsack(int *price,int *weight,int n,int capacity,int dp[][100]){

	//base 
	if(capacity==0 || n==0){
		dp[n][capacity]=0;
		return 0;
	}

	int inc=0,exc=0;

	if(capacity>=weight[n-1]){
		inc=price[n-1] + Knapsack(price,weight,n-1,capacity-weight[n-1],dp);
	}
		exc=0 + Knapsack(price,weight,n-1,capacity,dp);

	dp[n][capacity]=max(inc,exc);
	return max(inc,exc);

}


int main()
{

	int price[]={10,20,10,15};
	int weight[]={2,2,3,1};
	int capacity=5;
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
	int n=sizeof(price)/sizeof(int);
	cout<<Knapsack(price,weight,n,capacity,dp)<<endl;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=capacity;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}