// recursion1
#include <iostream>
using namespace std;


// base case 

//recursive call

int fact(int n){

	//base case;
	if(n==0){
		return 1;
	}

	//recursice call
	int myassumption=fact(n-1);


	//ans
int ans=n*myassumption;
return ans;

}




int main()
{
	int n;
	cin>>n;
	int ans=fact(5);
	cout<<ans;


	
	return 0;
}