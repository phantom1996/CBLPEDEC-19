// lenght
#include <iostream>
using namespace std;

int stringlength(char a[]){
	int i=0;
	int cnt=0;
	while(a[i]!='\0'){
		cnt++;
		i++;
	}
	return cnt;
}

int main()
{
	char a[1000];
	cin.getline(a,1000);
	int ans=stringlength(a);
	cout<<ans;
	
	return 0;
}