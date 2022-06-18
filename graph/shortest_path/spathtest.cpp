#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adj;
    void add(int u,int v,int w){
        adj[u].push_back({v,w});
    }

    void dfsTopo(int node,unordered_map<int,bool> &visited, stack<int> &s){
        visited[node] = true;
        for(auto it:adj[node]){
            if(!visited[it.first]){
                dfsTopo(it.first,visited,s);
            }
        }
        s.push(node);
    }

    void sPath(vector<int> &dist,stack<int> &s, int src){
        dist[src] = 0;

        while(s.empty() == false){
            int top = s.top();
            s.pop();

            if(dist[top] != INT_MAX){
                for(auto nb: adj[top]){
                    if(dist[top] + nb.second < dist[nb.first]){
                        dist[nb.first] = dist[top] + nb.second;
                    }
                }
            }
        }
    }


};



int main()
{
    Graph g;

    g.add(0, 1, 5);
    g.add(0, 2, 3);
    g.add(1, 2, 2);
    g.add(1, 3, 6);
    g.add(2, 3, 7);
    g.add(2, 4, 4);
    g.add(2, 5, 2);
    g.add(3, 4, -1);
    g.add(4, 5, -2);

    int n = 6;

    //topo sort
    unordered_map<int,bool> visited;
    stack<int> s;
    g.dfsTopo(0,visited,s);


    //dist find
    vector<int> dist(n);

    for(int i=0;i<n;i++){
        dist[i] = INT_MAX;
    }

    g.sPath(dist,s,1);

    cout<<"Answer is:- "<<endl;

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }


    return 0;
}