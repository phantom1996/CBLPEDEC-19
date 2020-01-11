// starpattern
#include <iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	int i;
	for(i=1;i<=n;i++){
		int j;
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<" ";
		for(j=n;j>=i;j--){
			cout<<"*";
		}
		cout<<" ";
		for(j=n;j>=i;j--){
			cout<<"*";
		}
		cout<<" ";
		for(j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;



	}






	return 0;
}