// rec ques
#include <iostream>
using namespace std;

char c[100][100]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void func(int a){
	if(a==0){
		return;
	}
	int d=a%10;
	func(a/10);
	cout<<c[d]<<" ";


}


int main()
{
	int n;
	cin>>n;
	func(n);
	
	return 0;
}