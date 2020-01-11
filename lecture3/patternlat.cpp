// patternlat
#include <iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	int i;
	cout<<"1"<<endl;//n==1
	for(i=2;i<=n;i++){

		cout<<"1";//starting

		if(i%2==0){//even
			int j;
			for(j=1;j<=i-2;j++){
				cout<<"0";
			}
		}
		else{//odd
			int j;
			for(j=1;j<=i-2;j++){
				cout<<"1";
			}
		}





		cout<<"1";//ending
		cout<<endl;

	}

	return 0;
}
