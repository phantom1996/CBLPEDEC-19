// largest strig
#include <iostream>
using namespace std;
int length(char a[]){

	int i;
	for(i=0;a[i]!='\0';i++){
	}
	return i;
}
int main() {
	int n;
	cin>>n;
	cin.get();
	char ans[100];
	int len=0;

	for(int i=0;i<n;i++){
		char a[100];
		cin.getline(a,100);
		int l=length(a);
		if(l>len){
			len=l;
			for(int j=0;j<len;j++){
				ans[j]=a[j];
			}
			ans[len]='\0';
		}
	}
	cout<<ans<<" "<<len<<endl;


	return 0;
}
