// prime
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=2;
	while(i<n){
		
		if(n%i==0){
			cout<<"NOT PRIME"<<endl;
			return 0;
		}
			i++;//i=i+1 i+=1
	}
	cout<<"Prime"<<endl;


	return 0;
}