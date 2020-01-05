// prime 2-n
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=2;
	while(i<=n){
	int j=2;
	bool is_prime=true;

	while(j<i){
		if(i%j==0){
			is_prime=false;
			//cout<<"NOT Prime"<<endl;
			break;
		}
		j=j+1;
	}
	if(is_prime==true){
		cout<<i<<" ";
	}
	i=i+1;
}

	return 0;
}