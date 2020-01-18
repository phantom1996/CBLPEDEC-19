// conversionfunction
#include <iostream>
using namespace std;

int Conversion(int f){
	int ans=(5*(f-32))/9;
	return ans;
}


int main()
{
	int initial,final,step;
	cin>>initial>>final>>step;
	for(int i=initial;i<=final;i+=step){
		int ans=Conversion(i);
		cout<<i<<" "<<ans<<endl;
	}


	return 0;
}