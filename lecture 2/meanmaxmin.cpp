// meanmaxmin
#include <iostream>
using namespace std;
int main()
{
	int mean=0,maxi=-100000,mini=100000;
	int n,b;
	cin>>n;
	int i=1;
	while(i<=n){
		cin>>b;
		if(b>maxi){
			maxi=b;
		}
		if(b<mini){
			mini=b;
		}
		mean=mean+b;
		i=i+1;
	}
cout<<mean/n<<" "<<maxi<<" "<<mini<<endl;
	return 0;
}