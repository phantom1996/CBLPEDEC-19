// patternABCD
#include <iostream>
using namespace std;

int main()
{
	/*
	char c='A';
	cout<<c<<endl;
	cout<<c++<<endl;
	cout<<c<<endl;

	cout<<'B'-'A'<<endl;
	cout<<'B'-1<<endl;
*/
	int n;
	cin>>n;
	int i;
	for(i=n;i>=1;i--){
		char c='A';
		//increasing
		int j;
		for(j=1;j<=i;j++){
			cout<<c;
			c++;
		}
		//decreasing
		c--;
		for(j=1;j<=i;j++){
			cout<<c;
			c--;
		}
		cout<<endl;



	}


	return 0;
}