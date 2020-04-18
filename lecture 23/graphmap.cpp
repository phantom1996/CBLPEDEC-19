#include <iostream>
#include <map>
#include <list>
using namespace std;

template <typename T>

class Graph{

    map<T,list<T> > mymap;

public:
    void AddEdge(T src,T dest,bool bidirec=true){

        mymap[src].push_back(dest);
        if(bidirec){
            mymap[dest].push_back(src);
        }
    }


    void print(){

    for(auto i : mymap){
        cout<<i.first<<"---->";
        for(auto j:i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    }



};





int main(){

    Graph<string> g;
    g.AddEdge("Modi","Yogi");
    g.AddEdge("Modi","Trumph");
    g.AddEdge("modi","Putin");
    g.AddEdge("Trumph","Putin");


    g.print();
    cout<<endl;
    Graph<int> g1;
    g1.AddEdge(1,2);
    g1.AddEdge(2,3);
    g1.AddEdge(6,5);
    g1.print();

    return 0;
}
