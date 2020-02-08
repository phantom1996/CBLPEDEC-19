// ratinmaze
#include <iostream>
using namespace std;

bool ratinmaze(char a[][100],int i,int j,int n,int m,int  path[][100]){

	if(i==n-1 && j==m-1){
		path[i][j]=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<path[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}

	path[i][j]=1;
	//right
	if(a[i][j+1]!='x' && j+1<m){
		path[i][j+1]=1;
		bool kyarightseansmila=ratinmaze(a,i,j+1,n,m,path);
		if(kyarightseansmila){
			return true;
		}
	}
	//downward
	if(a[i+1][j]!='x' && i+1<n){
		path[i+1][j]=1;
		bool kyadownseansmila=ratinmaze(a,i+1,j,n,m,path);
		if(kyadownseansmila){
			return true;
		}
	}
	path[i][j]=0;
	return false;





}




int main()
{

	char a[100][100]={
		"oooo",
		"oxox",
		"xooo",
		"oxoo"
	};
	int row=4;
	int col=4;
	int path[100][100]={0};
	bool ispathavailable=ratinmaze(a,0,0,row,col,path);
	if(ispathavailable==false){
		cout<<"Path Not Found";
	}
	/*if(ispathavailable){
		for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<path[i][j]<<" ";
			}
			cout<<endl;
		}
	}*/







	
	return 0;
}