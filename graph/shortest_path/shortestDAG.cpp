#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int,list<pair<int,int>>> adj;

    void add(int u,int v, int w){
        adj[u].push_back({v,w});
    }

    void dfsTopo(int i,unordered_map<int,bool> &visited, stack<int> &s){
        visited[i] = true;

        for(auto it:adj[i]){
            if(!visited[it.first]){
                dfsTopo(it.first,visited,s);
            }
        }

        s.push(i);
    }
    void printList(){
        for(auto it: adj){
            cout<<it.first<<"->";
            for(auto j:it.second){
                cout<<"{"<<j.first<<","<<j.second<<"},";
            }
            cout<<endl;
        }
    }
    void sPath(int src,vector<int> &dist,int n, stack<int> &s){
        dist[src] = 0;

        while(s.empty() == false){
            int t = s.top();
            s.pop();

            if(dist[t] != INT_MAX){
                for(auto it: adj[t]){
                    if(dist[t] + it.second < dist[it.first]){
                        dist[it.first] = dist[t] + it.second;
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

    g.printList();

    int n = 6;

    unordered_map<int, bool> visited;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfsTopo(i, visited, s);
        }
    }
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }

    g.sPath(1, dist, n, s);

    cout<<"Answer is:- "<<endl;

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }

    return 0;
}