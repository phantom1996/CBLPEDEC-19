// patter 10
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,val;
	for(i=1;i<=n;i++){
//even
		if(i%2==0){
			val=0;
			int j;
			for(j=1;j<=i;j++){
				cout<<val;
				val=1-val;
			}
		}
		//odd
		else{
			val=1;
			int j;
			for(j=1;j<=i;j++){
				cout<<val;
				val=1-val;
			}
		}
		cout<<endl;
	}
	return 0;
}