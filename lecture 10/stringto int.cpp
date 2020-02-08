// stringto int
#include <iostream>
#include <cstring>
using namespace std;

int stoint(char *a,int n){
	if(n==-1){
		return 0;
	}
	int last=a[n]-'0';
	int ans=stoint(a,n-1)*10+last;
	return ans;
}



int main()
{

	char a[100];
	cin>>a;

	int ans=stoint(a,strlen(a)-1);
	cout<<ans<<endl;
	cout<<ans/10;
	return 0;
}