// twisted strign
//array cost
#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char a[100];
	cin.getline(a,100);
	int n;
	cin>>n;

// slide
	int i=0;
	while(i<n){
		int len=strlen(a);
		for(int j=len;j>=0;j--){
			a[j+1]=a[j];
		}
		i++;
	}
	cout<<a<<endl;
	int len=strlen(a);
	int index=0;
	for(int i=len-n;i<len;i++){
		a[index]=a[i];
		index++;
	}
	a[len-n]='\0';
	cout<<a;







	return 0;
}
