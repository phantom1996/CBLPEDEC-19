// 2-d array

#include <iostream>
using namespace std;
int main() {
	// int a[row][col]
	int a[2][3];
	for(int row=0;row<2;row++){
		for(int col=0;col<3;col++){
			// cout<<row<<" "<<col<<endl;
			cin>>a[row][col];
		}
	}
	for(int row=0;row<2;row++){
		for(int col=0;col<3;col++){
			// cout<<row<<" "<<col<<endl;
			cout<<a[row][col]<<" ";
		}
		cout<<endl;
	}



	return 0;
}





