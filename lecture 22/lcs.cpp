// lcs
#include <iostream>
#include <cstring>
using namespace std;

int lcs(char *x,char* y,int m,int n,int dp[][100]){

	if(m==0 || n==0){
		dp[m][n]=0;
		return 0;
	}
	if(dp[m][n]!=-1){
		return dp[m][n];
	}

	if(x[m-1]==y[n-1]){
		//match
		dp[m][n]=1+lcs(x,y,m-1,n-1,dp);
		return dp[m][n];
	}
	int op1=lcs(x,y,m,n-1,dp);
	int op2=lcs(x,y,m-1,n,dp);

	dp[m][n]=max(op1,op2);
	return dp[m][n];
}


int bottomup(char *a,char *b,int m,int n){
	int dp[100][100]={0};

	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){

			if(i==0 || j==0){
				dp[i][j]=0;
			}
			else if(a[i-1]==b[j-1]){
				dp[i][j]= 1+ dp[i-1][j-1];
			}
			else{
				int op1=dp[i-1][j];
				int op2=dp[i][j-1];
				dp[i][j]=max(op1,op2);
			}
		}
	}
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}
	
	cout<<endl;
	}
	cout<<endl;
	return dp[m][n];
}




int main()
{

	char x[100];
	char y[100];
	cin>>x;
	cin>>y;

	int m=strlen(x);
	int n=strlen(y);
	int dp[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			dp[i][j]=-1;
		}
	}
//	cout<<lcs(x,y,m,n,dp)<<endl;
	cout<<bottomup(x,y,m,n)<<endl;
	/*for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			cout<<dp[i][j]<<" ";
		}
	
	cout<<endl;
	}*/



	return 0;
}