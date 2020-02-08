// subsequence
#include <iostream>
using namespace std;

void subsequence(char *a,int i,char *output,int j){
	//base case
	if(a[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}
	subsequence(a,i+1,output,j);
	output[j]=a[i];
	//ek baar insertion
	subsequence(a,i+1,output,j+1);
	//subsequence(a,i+1,output,j);
}




int main()
{

	char a[]="abc";
	char output[100];
	subsequence(a,0,output,0);


	
	return 0;
}