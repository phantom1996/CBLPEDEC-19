// 2-dgrid
#include <iostream>
using namespace std;

int gridans(int n,int m){

	//base case
	if(n==0 && m==0){
		return 1;
	}
	if(n<0 || m<0){
		return 0;
	}
	int ans=gridans(n,m-1)+gridans(n-1,m);
	return ans;

}




int main()
{

	int n,m;
	cin>>n>>m;

	int ans=gridans(n-1,m-1);
	cout<<ans;

	
	return 0;
}