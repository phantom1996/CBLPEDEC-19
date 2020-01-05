// pattern 1
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=1;int space=n-1;
	while(i<=n){//row ko count kr rahi h
		int j=1; //space count 
		while(j<=space){
			cout<<" ";
			j=j+1;
		}
		space=space-1;
		//increading number print
		int m=i,n=2*i-1;
		while(m<=n){
			cout<<m;
			m=m+1;
		}
		int d1=m-2,d2=i;
		while(d1>=d2){
			cout<<d1;
			d1=d1-1;
		}

		cout<<endl;
		//decreasing
	i=i+1;
	


	return 0;
}