// sudoko
#include <iostream>
#include <cmath>
using namespace std;


bool issafetoput(int mat[][9],int i,int j,int number,int n){
	for(int k=0;k<n;k++){
		if(mat[i][k]==number || mat[k][j]==number){
			return false;
		}
	}
	//box
	 n=sqrt(n);
	int si=(i/n)*n;
	int sj=(j/n)*n;
	for(int p=si;p<si+n;p++){
		for(int q=sj;q<sj+n;q++){
			if(mat[p][q]==number){
				return false;
			}
		}
	}
	return true;
}




bool sudokosolver(int mat[][9],int i,int j,int n){

	//base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		return sudokosolver(mat,i+1,0,n);
	}
	if(mat[i][j]!=0){
		return sudokosolver(mat,i,j+1,n);
	}


	//number filling
	for(int number=1;number<=n;number++){
		if(issafetoput(mat,i,j,number,n)){
			mat[i][j]=number;
			bool kyabaatbani=sudokosolver(mat,i,j+1,n);
			if(kyabaatbani){
				return true;
			}
			mat[i][j]=0;
		}
	}
	return false;
}




int main()
{
int mat[9][9] =
{{5,3,0,0,7,0,0,0,0},
{6,0,0,1,9,5,0,0,0},
{0,9,8,0,0,0,0,6,0},
{8,0,0,0,6,0,0,0,3},
{4,0,0,8,0,3,0,0,1},
{7,0,0,0,2,0,0,0,6},
{0,6,0,0,0,0,2,8,0},
{0,0,0,4,1,9,0,0,5},
{0,0,0,0,8,0,0,7,9}};


sudokosolver(mat,0,0,9);





	
	return 0;
}