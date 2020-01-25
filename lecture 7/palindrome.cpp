// palindrome
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



bool is_palindrome(char a[],int len){
	int startindex=0;
	int endindex=len-1;

	while(startindex<=endindex){
		if(a[startindex]!=a[endindex]){
			return false;
		}
		startindex++;
		endindex--;
	}
	return true;
}
void reverse(char a[],int len){
	int startindex=0;
	int endindex=len-1;

	while(startindex<=endindex){
		swap(a[startindex],a[endindex]);
		startindex++;
		endindex--;
	}
}


int main()
{
	char a[1000];
	cin.getline(a,1000);
	int ans=stringlength(a);

//	cout<<boolalpha<<is_palindrome(a,ans)<<endl;
	reverse(a,ans);
	cout<<a<<endl;	
	
	return 0;
}