// maximum element in array
#include <iostream>
#include <climits> //mathematicals
using namespace std;
int main()
{
	//int maxi=-1000000;
	int maxi=INT_MIN;
	cout<<"Enter the number of elemnts you want to insert"<<endl;
	int n;
	cin>>n;
	int a[10000];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	for(int i=0;i<n;i++){

		if(a[i]>maxi){
			maxi=a[i];
		}


	}
	cout<<maxi<<endl;



	return 0;
}