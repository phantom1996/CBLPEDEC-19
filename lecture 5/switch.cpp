// switch
#include <iostream>
using namespace std;
int main()
{

	char c;
	cin>>c;
	switch(c){
		default:
		cout<<"INVALID LOCATION"<<endl;
			break;
		case 'n':
			cout<<"north"<<endl;
				break;
		case 's':
			cout<<"south"<<endl;
				break;
		case 'e':
			cout<<"east"<<endl;
				break;
		case 'w':
			cout<<"west"<<endl;
			break;
		//default:
		//	cout<<"INVALID LOCATION"<<endl;

	}



	return 0;
}