// phonekeypad
#include <iostream>
using namespace std;

string s[]={"/",".+","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void phonekeypad(char *a,int i,char *output,int j){
	//base case
	if(a[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}
	//recursive case
	int digit=a[i]-'0';
	for(int index=0;s[digit][index]!='\0';index++){
		output[j]=s[digit][index];
		phonekeypad(a,i+1,output,j+1);
	}

}





int main()
{
	// string s[100]={"mango","apple","banana"}
	char a[100];
	cin>>a;
	char output[100];
	phonekeypad(a,0,output,0);

	
	return 0;
}