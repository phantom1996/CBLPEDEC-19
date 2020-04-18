#include <iostream>
#include <unordered_map>
#include <map>
#include <string>
using namespace std;


int main(){

    //synatx
    //unordered_map<string,int> h;
    map<string,int> h;
    //innsertionn
    h.insert(make_pair("Mango",100));

    pair<string,int> p("Apple",80);
    h.insert(p);


    h["pineapple"]=50;

    string s="Mango";

    if(h.count(s)){
        cout<<"Price of "<<s<<" is "<<h[s]<<endl;
    }
    else{
        cout<<"Price not exist:";
    }

  //  auto x=5;
   // cout<<x;

   for(auto i:h){
        cout<<i.first<<"--->"<<i.second<<endl;
   }


    return 0;
}
