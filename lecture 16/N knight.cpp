// N knight
#include <iostream>
using namespace std;
int cnt=0;
int m=8;
bool is_valid(int n,int board[][100],int row,int col,int *row_dir,int *col_dir){
	for(int i=0;i<m;i++){
		int r=row+row_dir[i];
		int c=col+col_dir[i];
		if(r>=0 && r<n && c>=0 && c<n){
			if(board[r][c]==1){
				return false;
			}
		}
	}
	return true;
}
bool knightsolver(int n,int board[][100],int i,int j,int number){

//base case
	if(number>n){
		return false;
	}
	if(i==n){
		return false;
	}
	if(number==n){
		//possible solution
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(board[i][j]==1){
					cout<<"{"<<i<<"-"<<j<<"} ";
				}
			}
		}
		cout<<" ";
		cnt++;
		return false;
	}
	//column within boundary
	if(j==n){
		return knightsolver(n,board,i+1,0,number);
	}

	int row_dir[]={-1,-2,-2,-1,1,2,2,1};
	int col_dir[]={-2,-1,1,2,2,1,-1,-2};
	if(is_valid(n,board,i,j,row_dir,col_dir)){
		board[i][j]=1;
		bool kyaaagerakhpaye=knightsolver(n,board,i,j+1,number+1);
		if(kyaaagerakhpaye){
			return true;
		}
		board[i][j]=0;
	}
	return knightsolver(n,board,i,j+1,number);//age coluymn ke liye
	return false;



}




int main()
{
	int n;cin>>n;
	int board[100][100];
	knightsolver(n,board,0,0,0);
	cout<<endl<<cnt;


	
	return 0;
}