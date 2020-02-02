// string concat

#include <iostream>
using namespace std;

int length(char a[]){

	int i;
	for(i=0;a[i]!='\0';i++){
	}
	return i;
}


void stringconcat(char a[],char b[]){

	int lena=length(a);
	int lenb=length(b);
	int i;
	for(i=0;i<lena;i++){
	}
	int index=0;
	int j;
	for(j=i;j<lenb+lena;j++){
		a[j]=b[index];
		index++;
	}
	a[j]='\0';
}


int main() {
	char a[100]="Hello";
	char b[100]="Blocks";


	stringconcat(a,b);


	cout<<a<<endl;


	return 0;
}
