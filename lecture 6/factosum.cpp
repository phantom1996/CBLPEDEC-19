// factosum
#include <iostream>
using namespace std;

int main()
{
	int n,x;cin>>n;
	int final_ans=0;
	for(int i=1;i<=n;i++){
		cin>>x;
		int ans=1;
		for(int j=1;j<=x;j++){
			ans=(ans*j)%107;
		}
		final_ans=(final_ans+ans)%107;
	}
	cout<<final_ans%107;	
	return 0;
}