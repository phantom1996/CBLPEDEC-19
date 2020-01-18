// FUNCTION
#include <iostream>
using namespace std;

//SYNTAX

/*return_type name(){
//data type
//name function name

}*/

void printh(int x,int y ,int z){
	//return;
	cout<<"hello world"<<x<<endl;
	return;
}

int SUM(int a,int b){
	int s=a+b;
	return s;
}

void SUM2(int a,int b){

	cout<<a+b;
}
int main()
{
	int n;
	cin>>n;
	int m;
	cin>>m;
	int ts;
	//printh(n,m,o);
	ts=SUM(n,m);
	cout<<ts;
}