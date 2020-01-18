// functionodd-even
#include <iostream>
using namespace std;

bool oddeven(int n){
	if(n%2==0){
		return true;
	}
	else{
		return false;
	}
}


//forward declaration
int FACT(int );


int main()
{
	int n;
	cin>>n;
	//bool is_even=oddeven(n);
	//cout<<boolalpha<<is_even<<endl;
	int ans=FACT(n);
	cout<<ans;
}

int FACT(int n){

	int ans=1;
	for(int i=1;i<=n;i++){
		ans=ans*i;
	}
	return ans;
}

