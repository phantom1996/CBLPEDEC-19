// arraysorted
#include <iostream>
using namespace std;












bool is_sorted(int *a,int n){

	//base case 

	if(n==1){
		return true;
	}

	//recursive case
	bool kyachootasortedhai=is_sorted(a+1,n-1);//assumption
	if(a[0]<=a[1] && kyachootasortedhai){
		return true;
	}
	else{
		return false;
	}


}


bool is_sorted2(int a[],int n,int i=0){

	if(i==n-1){
		return true;
	}

	bool kyachootasortedhai=is_sorted2(a,n,i+1);
	if(a[i]<=a[i+1] && kyachootasortedhai){
		return true;
	}
	else{
		return false;
	}

}





int main()
{

	int a[]={1,2,4,3,5};
	int n=sizeof(a)/sizeof(int);
	cout<<boolalpha<<is_sorted2(a,n);


	
	return 0;
}