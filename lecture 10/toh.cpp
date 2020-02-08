// toh
#include <iostream>
using namespace std;

void TOH(int n,char source,char Helper,char Destination){
	//base case
	if(n==0){
		return;
	}
	//recursive case;
	TOH(n-1,source,Destination,Helper);
	cout<<"Moving Disc "<<n<<" "<<source<<" "<<Destination<<endl;
	TOH(n-1,Helper,source,Destination);

}



int main()
{

	int n;
	cin>>n;
	TOH(n,'A','B','C');



	
	return 0;
}