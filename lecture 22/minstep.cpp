// minstep
#include <iostream>
#include <climits>
using namespace std;


int MIN_Step(int n){

	if(n==1){
		return 0;
	}

	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	op1=MIN_Step(n-1)+1;

	if(n%2==0){
		op2=MIN_Step(n/2)+1;
	}

	if(n%3==0){
		op3=MIN_Step(n/3)+1;
	}

	return min(op1,min(op2,op3));
}


int Topdown(int n,int *dp){
	if(n==1){
		dp[n]=0;
		return dp[n];
	}
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	if(dp[n]!=-1){
		return dp[n];
	}

	op1=MIN_Step(n-1)+1;

	if(n%2==0){
		op2=MIN_Step(n/2)+1;
	}

	if(n%3==0){
		op3=MIN_Step(n/3)+1;
	}
	dp[n]=min(op1,min(op2,op3));
	return dp[n];

}


int Bottomup(int n){

	int dp[1000]={0};

	dp[1]=0;

	for(int i=2;i<=n;i++){
		int op1,op2,op3;
		op1=op2=op3=INT_MAX;

		op1=dp[i-1]+1;

		if(i%2==0){
			op2=dp[i/2]+1;
		}
		if(i%3==0){
			op3=dp[i/3]+1;
		}

		dp[i]=min(op1,min(op2,op3));
	}
	return dp[n];
}

int main()
{
	int k;cin>>k;
	int dp[1000];
	for(int i=0;i<1000;i++){
		dp[i]=-1;
	}
	//cout<<MIN_Step(k);

	//cout<<Topdown(k,dp);
	cout<<Bottomup(k);
	return 0;
}