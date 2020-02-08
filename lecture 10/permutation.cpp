// permutation
#include <iostream>
using namespace std;

void permutation(char *s,int i){
// base case
	if(s[i]=='\0'){
		cout<<s<<endl;
		return;
	}
	for(int j=i;s[j]!='\0';j++){
		swap(s[i],s[j]);
		permutation(s,i+1);
		swap(s[i],s[j]);//backtracing
	}


}




int main()
{
	char s[]="abc";
	permutation(s,0);


	
	return 0;
}