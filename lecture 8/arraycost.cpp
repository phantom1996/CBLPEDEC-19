//array cost
#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
    long long int n;cin>>n;
    long long int a[1000000];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    }
}
