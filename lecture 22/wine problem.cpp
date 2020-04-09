// wine problem
#include <iostream>
using namespace std;

int Wineprice(int *price,int i,int j,int day){
	//base case
	if(i>j){
		return 0;
	}

	int op1=day*price[i] + Wineprice(price,i+1,j,day+1);
	int op2=day*price[j] + Wineprice(price,i,j-1,day+1);


	int ans=max(op1,op2);

	return ans;


}



int main()
{

	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);
	cout<<Wineprice(price,0,n-1,1);
	
	return 0;
}