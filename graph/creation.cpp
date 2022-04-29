#include <bits/stdc++.h>
// #include<unordered_map>
// #include<list>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;
    void addEdge(int u,int v, bool direction){
        //direction = 0 undirected
        // direction  =1 directed

        // create edge from u to v
        adj[u].push_back(v);

        if(!direction){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto it:adj){
            cout<< it.first <<"-> ";
            for(auto j: it.second){
                cout<<j<<" ,";
            }
            cout<<endl;
        }
    } 
};

int main()
{
    int n;
    cout<<"enter no of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"enter no of edges"<<endl;
    cin>>m;

    graph g;

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,false);
    }

    g.printAdjList();
    return 0;
}