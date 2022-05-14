#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    void add(int u, int v)
    {
        adj[u].push_back(v);
    }

    bool checkCycleDfs(int node,unordered_map<int,bool> &visited ,unordered_map<int,bool> &dfsVisited){
        visited[node] = true;
        dfsVisited[node] = true;

        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                bool detect = checkCycleDfs(neighbour,visited,dfsVisited);
                if(detect) {
                    return true;
                }
            }else{
                if(dfsVisited[neighbour]){
                    return true;
                }
            }
        }

        dfsVisited[node] = false;
        return false;
    }

    bool isCyclic(int V, vector<int> adj[])
    {
        unordered_map<int, bool> visited;
        unordered_map<int, bool> dfsVisited;
        bool ans = false;
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                ans = checkCycleDfs(i, visited, dfsVisited);
                if (ans)
                {
                    return ans;
                }
            }
        }

        return ans;
    }
};

int main()
{
    Graph obj;
    int V, E;
    cin >> V >> E;

    vector<int> adj[V];

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        obj.add(u, v);
    }
    cout << obj.isCyclic(V, adj) << "\n";

    return 0;
}