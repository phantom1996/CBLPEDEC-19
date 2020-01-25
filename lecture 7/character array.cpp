// character array
#include <iostream>
using namespace std;

int main()
{
	// char str[100];
	// cout<<sizeof(str);
	//char str[4]={'A','B','C','D'};
	//char *c=str;
	// cout<<c<<endl;
	// cout<<str<<endl;
	//cout<<str[1];

	//user input;

char str[100];
char c;
//Method 1
// c=cin.get();
// int b=0;
// 	while(c!='$'){
// 		str[b]=c;
// 		b++;
// 		c=cin.get();
// 	}
// str[b]='\0';
// 	cout<<str;
//method 2 and cin automatically insert null at last
// cin>>str;
// cout<<str;

//Method 3 
// cin.getline(name,max_size,delimiter)
cin.getline(str,100,'');
cout<<str;



	return 0;
}