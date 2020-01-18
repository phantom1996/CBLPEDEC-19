// functionprime
#include <iostream>
using namespace std;

bool Primecheck(int n){

	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}



int main()
{
	int n;cin>>n;
	bool is_prime=Primecheck(n);
	cout<<boolalpha<<is_prime;



	return 0;
}