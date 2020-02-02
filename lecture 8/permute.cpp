// permute
//array cost
#include <iostream>
using namespace std;
bool is_permute(int a[]){

	for(int i=0;i<26;i++){
		if(a[i]!=0){
			return false;
		}
	}
	return true;
}

int main() {


	int a[26]={0};
	char b[10000];
	char c[10000];
	cin.getline(b,10000);
	cin.getline(c,10000);

	for(int i=0;b[i]!='\0';i++){
		a[b[i]-97]++;
		a[c[i]-97]--;
	}
	cout<<boolalpha<<is_permute(a);




}
