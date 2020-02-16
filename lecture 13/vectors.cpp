// vectors
#include <iostream>
#include<vector>
using namespace std;

int main()
{
	//syntax
	vector<int> v;
	cout<<v.max_size()<<" ";
	// v.push_back(1);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// v.push_back(2);
	// cout<<v.capacity()<<endl;
	// v.push_back(3);
	// cout<<v.capacity()<<endl;
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.pop_back();
	v.pop_back();
	cout<<v.capacity()<<" ";
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}




	// cout<<v.capacity()<<endl;
	// v.push_back(9);
	// v.push_back(10);
	// cout<<v.size()<<endl;
	// cout<<v.capacity()<<endl;
	// for(int i=1;i<=10;i++){
	// 	v.push_back(i);
	// }
	// for(int i=0;i<=9;i++){
	// 	cout<<v[i]<<" ";
	// }
	
	return 0;
}