// square-root precision
// square root
#include <iostream>
using namespace std;
int main()
{
	int n,precision;cin>>n>>precision;
	float increment=1;
	float i=1;
	int current_precision=0;
	while(current_precision<precision){
	while(i*i<=n){
		i=i+increment;
	}
	i=i-increment;
	increment=increment/10;
	current_precision++;
}
cout<<i;
	return 0;
}