// callbyvalue
#include <iostream>
using namespace std;

void func(int n){
	cout<<n;
}

void swap1(int n,int m){
	int c=n;
	n=m;
	m=c;
	cout<<" IN FUNCTION "<<n<<" "<<m<<endl;
}
void swap2(int &n,int &m){
	int c=n;
	n=m;
	m=c;
	cout<<" IN FUNCTION "<<n<<" "<<m<<endl;
}

int main()
{
	//int n;
	//func(n);
	int a,b;
	cin>>a>>b;
	swap1(a,b);
	cout<<"IN MAIN "<<a<<" "<<b<<endl;
	return 0;
}