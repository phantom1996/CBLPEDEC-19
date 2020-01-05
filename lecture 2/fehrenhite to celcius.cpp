// fehrenhite to celcius
// pattern 1
#include <iostream>
using namespace std;
int main()
{
	int intial_value,final_value,step_value;
	cin>>intial_value>>final_value>>step_value;

	while(intial_value<=final_value){

		//conversion
		int celcius=(5*(intial_value-32))/9;
		cout<<intial_value<<" "<<celcius<<endl;

		intial_value=intial_value+step_value;
	}

	return 0;
}