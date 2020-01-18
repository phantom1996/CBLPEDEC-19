#include <iostream>
using namespace std;
int main()
{
	int i=10;
	//syntax  (condition)?(true:execute):(false:execute);
	//(i>5)?cout<<"Greater":cout<<"Lesser";

	int n;
	cin>>n;
	(n%2==0)?cout<<"Even":cout<<"odd";
}