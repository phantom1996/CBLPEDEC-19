#include <iostream>
#include <map>
#include <list>
#include <queue>
#include<climits>
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

    void BFS(T src){

        queue<T> q;
        map<T,bool> visited;

        q.push(src);
        visited[src]=true;

        while(!q.empty()){
            T temp=q.front();
            q.pop();
            cout<<temp<<" ";
            for(auto neighour : mymap[temp]){
                if(!visited[neighour]){
                    q.push(neighour);
                    visited[neighour]=true;
                }
            }

        }

    }

    int SSSP(T src,T dest){
        queue<T> q;
        map<T,int> dist;
        for(auto key : mymap){
            dist[key.first]=INT_MAX;
        }

        map<T,T> parent;

        q.push(src);
        dist[src]=0;

        parent[src]=src;

        while(!q.empty()){
            T temp=q.front();
            q.pop();
            for( auto neigbhour : mymap[temp]){
                if(dist[neigbhour]==INT_MAX){
                    dist[neigbhour]= dist[temp] + 1;
                    parent[neigbhour]=temp;
                    q.push(neigbhour);
                }
            }
        }

        for(auto i : parent){
            cout<<"Parent of "<<i.first<<" is "<<i.second<<endl;
        }
        for(auto i : dist){
            cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
        }

        return dist[dest];
    }


    void DFS_helper(T src,map<T,bool> &visited){
        cout<<src<<" ";
        visited[src]=true;

        for(auto neighbour : mymap[src]){
            if(!visited[neighbour]){
                DFS_helper(neighbour,visited);
            }
        }
    }


    int DFS(T src){
        map<T,bool> visited;
        DFS_helper(src,visited);
        int compnent=1;
        for(auto i : mymap){
            if(!visited[i.first]){
                DFS_helper(i.first,visited);
                compnent++;
            }
        }
        cout<<endl;
        return compnent;
    }





};

int main(){

    Graph<int > g;
    g.AddEdge(0,1);
    g.AddEdge(0,4);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(2,4);
    g.AddEdge(4,3);
    g.AddEdge(3,5);

    g.AddEdge(15,16);
    g.AddEdge(16,17);
    g.AddEdge(100,101);

    //g.BFS(0);
    //cout<<g.SSSP(0,5)<<endl;
    g.print();
    cout<<endl;
    cout<<g.DFS(0)<<endl;
    return 0;
}
