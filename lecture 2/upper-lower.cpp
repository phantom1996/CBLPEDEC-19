// upper-lower
// pattern 1
#include <iostream>
using namespace std;
int main()
{
	char c;cin>>c;
	int value=int(c);
	if(c>=65 && c<=90){
		cout<<"UPPER"<<endl;
	}
	else{
		cout<<"LOWER"<<endl;
	}

	return 0;
}