// linear search
#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the number of elemnts you want to insert"<<endl;
	int n;
	cin>>n;
	int a[10000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"enter the key you want to search"<<endl;
	int key;
	cin>>key;


//search
int i;
	for(i=0;i<n;i++){
		if(a[i]==key){
			cout<<"Found"<<endl;
			//return 0;
			break;
		}
	}
	if(i==n){
		cout<<"NOT FOUND"<<endl;
	}
	





	return 0;
}