// substring
//array cost
#include <iostream>
#include <cstring>
using namespace std;
int main() {

	char a[1000];
	cin.getline(a,1000);

	int len=strlen(a);
	for(int i=0;i<len;i++){
		char ans[1000];
		int index=0;
		for(int j=i;j<len;j++){
			ans[index]=a[j];
			index++;
			ans[index]='\0';
			cout<<ans<<endl;
		}
	}



}
