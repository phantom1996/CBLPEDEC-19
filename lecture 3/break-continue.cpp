// break-continue
#include <iostream>
using namespace std;
/*
multi
line
comm
*/
int main()
{
	int i=1;
	//break;
	while(i<10){
		cout<<i<<" ";
		if(i==5){
			break;
		}
		i++;
	}
//continue;
	cout<<endl;
	i=1;
	while(i<=5){
		cout<<i<<" ";
		if(i==5){
			i++;
			continue;
		}
		i++;
	}

	return 0;
}