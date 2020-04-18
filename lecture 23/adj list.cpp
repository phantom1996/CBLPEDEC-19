//adj list
#include <iostream>
#include <list>
using namespace std;

class Graph{

    int V;
    list<int> *adjList;

public:
    Graph(int s){
        V=s;
        adjList=new list<int>[V];
    }

    void AddEdge(int src,int dest,bool bidirec=true){
        adjList[src].push_back(dest);
        if(bidirec){
            adjList[dest].push_back(src);
        }
    }


    void print(){

        for(int i=0;i<V;i++){
            cout<<i<<"------>";
            for(auto j:adjList[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }

    }

};

int main(){

//    list<int> l;
  //  l.push_back()

    Graph g(7);
    g.AddEdge(0,1,false);
    g.AddEdge(0,2);
    g.AddEdge(0,3);
    g.AddEdge(3,2);
    g.AddEdge(1,3);
    g.AddEdge(5,6);

    g.print();

    return 0;
}
