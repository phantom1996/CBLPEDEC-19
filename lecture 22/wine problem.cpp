// wine problem
#include <iostream>
using namespace std;

int Wineprice(int *price,int i,int j,int day){
	//base case
	if(i>j){
		return 0;
	}

	int op1=day*price[i] + Wineprice(price,i+1,j,day+1);
	int op2=day*price[j] + Wineprice(price,i,j-1,day+1);


	int ans=max(op1,op2);

	return ans;


}

int topdown(int *price,int i,int j,int day,int dp[][100]){

	if(i>j){
		dp[i][j]=0;
		return 0;
	}


	if(dp[i][j]!=-1){
		return dp[i][j];
	}



	int op1=day*price[i] + topdown(price,i+1,j,day+1,dp);
	int op2=day*price[j] + topdown(price,i,j-1,day+1,dp);

	int ans=max(op1,op2);
	dp[i][j]=ans;
	return ans;



}
int bottomup(int *price,int n){

	int dp[100][100]={0};
	int day=n;

//daigonal filling
	for(int i=0;i<n;i++){
		dp[i][i]=price[i]*day;
	}

	day--;

	for(int len=2;len<=n;len++){
		int i=0;
		int maxi=n-len;

		while(i<=maxi){
			int j=i+len-1;
			int op1=price[i]*day + dp[i+1][j];
			int op2=price[j]*day + dp[i][j-1];
			dp[i][j]=max(op1,op2);
			i++;
		}
		day--;

	}

for (int i = 0; i < n; ++i)
{
	for (int j = 0; j <n ; ++j)
	{
		cout<<dp[i][j]<<" ";
	}
	cout<<endl;
}

return dp[0][n-1];

}







int main()
{

	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
	//cout<<Wineprice(price,0,n-1,1)<<endl;
	cout<<topdown(price,0,n-1,1,dp)<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<bottomup(price,n)<<endl;
	return 0;
}