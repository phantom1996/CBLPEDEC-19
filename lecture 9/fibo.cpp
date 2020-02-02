// fibo
#include <iostream>
using namespace std;

int fibo(int n){

//base case

	if(n==0 || n==1){
		return n;
	}


	// recusive call
	//asuumption

	int myassumption=fibo(n-1)+fibo(n-2);//assume
	return myassumption;


}



int main()
{
	int ans=fibo(6);
	cout<<ans;
	
	return 0;
}