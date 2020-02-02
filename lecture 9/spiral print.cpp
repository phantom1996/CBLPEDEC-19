// spiral print
#include <iostream>
using namespace std;



void input(int a[][10],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
}

void spiralprint(int a[][10],int n,int m){

int condition;
if(n%2){
	condition=n/2+1;
}
else{
	condition=n/2;
}
int i=0;
int sr=0,sc=0,er=n-1,ec=m-1;
	while(i<n*m){

		for(int j=sc;j<=ec;j++){
			cout<<a[sr][j]<<" ";
			i++;
		}
		sr++;
		if(i>=n*m){
			break;
		}
		for(int j=sr;j<=er;j++){
			cout<<a[j][ec]<<" ";
			i++;
		}
		ec--;
		if(i>=n*m){
			break;
		}
		for(int j=ec;j>=sc;j--){
			cout<<a[er][j]<<" ";
			i++;
		}
		er--;
		if(i>=n*m){
			break;
		}
		for(int j=er;j>=sr;j--){
			cout<<a[j][sc]<<" ";
			i++;
		}
		sc++;
	}
}





int main()
{
	int n,m;cin>>n>>m;
	int a[10][10];
	input(a,n,m);
	spiralprint(a,n,m);
	
	return 0;
}