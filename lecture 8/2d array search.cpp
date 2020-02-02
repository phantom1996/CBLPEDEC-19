// 2d array search 
// 2-d array

#include <iostream>
using namespace std;
int main() {
	int row,col;
	cin>>row>>col;
	// int a[row][col]
	int a[200][300];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			// cout<<row<<" "<<col<<endl;
			cin>>a[i][j];
		}
	}
	// int key;cin>>key;
	// for(int i=0;i<row;i++){
	// 	for(int j=0;j<col;j++){
	// 		if(a[i][j]==key){
	// 			cout<<"FOUND "<<i<<" "<<j;
	// 			return 0;
	// 		}
	// 	}
	// 




	for(int column=0;column<col;column++){
		if(column%2==0){
			// column evren
			for(int start=0;start<row;start++){
				cout<<a[start][column]<<" ";
			}

		}
		else{
			//column odd
			for(int start=row-1;start>=0;start--){
				cout<<a[start][column]<<" ";
			}
		}
		// cout<<endl;


	}






	return 0;
}





