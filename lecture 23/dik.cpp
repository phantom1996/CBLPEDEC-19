//dlikstra
#include<iostream>
#include <map>
#include <list>
#include <set>
#include <climits>

using namespace std;
template <typename T>
class Graph{

    map<T,list<pair<T,int> >>h;
    public:
	void addEdge(T u,T v,int d,bool bidir=true){
		h[u].push_back(make_pair(v,d));
		if(bidir){
			h[v].push_back(make_pair(u,d));
		}
	}
    void Dijkstras(T src){
        map<T,int> dist;
        set<pair< int,T> >s;
        for( auto i: h){
            dist[i.first]=INT_MAX;
        }

        dist[src]=0;
        s.insert(make_pair(0,src));

        while(!s.empty()){
            auto p=*(s.begin());
            s.erase(s.begin());

            T parent=p.second;
            int parentkadist=p.first;

            for(auto neighour : h[parent]){
                if(dist[neighour.first] > parentkadist + neighour.second){
                    auto f=s.find(make_pair(dist[neighour.first],neighour.first));
                    if(f!=s.end()){
                        s.erase(f);
                    }
                    dist[neighour.first]=parentkadist + neighour.second;
                    s.insert(make_pair(dist[neighour.first],neighour.first));
                }
            }

        }

        for(auto i : dist){
            cout<<"Distace of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
        }

    }


};



int main(){

	Graph<string> g;

	g.addEdge("Amritsar","Agra",1);
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2);
	g.addEdge("Delhi","Agra",1);
	g.addEdge("Bhopal","Agra",2);
	g.addEdge("Bhopal","Mumbai",3);
	g.addEdge("Jaipur","Mumbai",8);

	g.Dijkstras("Delhi");

    return 0;
}
