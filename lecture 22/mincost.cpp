// mincost
#include <iostream>
#include<climits>
using namespace std;

int Mincostpath(int cost[][10],int r,int c){

	//base case
	if(r==0 && c==0){
		return cost[0][0];
	}

	else if(r<0 || c<0){
		//not valid
		return INT_MAX;
	}

	else{

		int op1=INT_MAX;
		int op2=INT_MAX;

		op1=Mincostpath(cost,r-1,c);
		op2=Mincostpath(cost,r,c-1);

		return min(op1,op2) + cost[r][c];

	}




}



int bottomup(int cost[][10],int i,int j){
	int dp[100][100]={0};

	for(int r=0;r<=i;r++){
		for(int c=0;c<=j;c++){

			if(r==0 && c==0){
				dp[r][c]=cost[0][0];
			}
			else if(r==0 && c>0){
				dp[r][c]=cost[r][c] +  dp[r][c-1];
			}
			else if(c==0 && r>0){
				dp[r][c]=cost[r][c] + dp[r-1][c];
			}
			else{
				int op1=dp[r][c-1];
				int op2=dp[r-1][c];

				dp[r][c]=min(op1,op2)+ cost[r][c];
			}


		}
	}
for (int r = 0; r <= i; ++r)
{
	for (int c = 0; c <=j ; ++c)
	{
		cout<<dp[r][c]<<" ";
	}
	cout<<endl;
}

	return dp[i][j];







}



int main()
{

	int cost[][10]={

		{1,2,5,1},
		{8,3,6,2},
		{0,1,3,3},
		{4,1,7,2}

	};
	int i,j;
	cin>>i>>j;
	cout<<Mincostpath(cost,i,j)<<endl;
	cout<<bottomup(cost,i,j);
	return 0;
}