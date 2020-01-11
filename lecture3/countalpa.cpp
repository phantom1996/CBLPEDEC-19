// countalpha

#include <iostream>
using namespace std;

int main()
{
int countalpha=0;
char c;
//cin>>c;
c=cin.get();
while(c!='$'){
	countalpha++;
	c=cin.get();
}
cout<<countalpha;

	return 0;
}