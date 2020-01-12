// array
#include <iostream>
using namespace std;
int main()
{
	
// datatype name [size]
	int array[10];
	//cin>>a[0]>>a[i].......
	/*for(int i=0;i<100;i++){
//scope of i
	}
	cout<<i;*/
//cout<<array[100];
	int n;
	cout<<"Enter the value less than 10"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		//cin>>array[i];
		array[i]=i;
	}
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}

	/*(for(int i=0;i<10;i++){
		cout<<array[i]<<" ";
	}*/
	//cout<<array[5]<<endl;
	//array[5]=100;

	//cout<<array[5];

	return 0;
}