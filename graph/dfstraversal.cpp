#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void add(int u, int v, bool direction)
    {
        adj[u].push_back(v);

        if (!direction)
        {
            adj[v].push_back(u);
        }
    }

    void dfs(unordered_map<int,bool> &visited, int node){
        cout<<node<<" ";
        visited[node] = true;
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(visited,it);
            }
        }
    }

    void dfstraversal(int n)
    {
        unordered_map<int,bool> visited;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(visited,i);
            }
        }
    }

    void printgraph()
    {
        for (auto it : adj)
        {
            cout << it.first << "->";
            for (auto it1 : it.second)
            {
                cout << it1 << " ";
            }

            cout << endl;
        }
    }
};

int main()
{
    graph g;
    int n, m;
    cin >> n >> m;
    int u, v;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        g.add(u, v, false);   
    }

    g.printgraph();
    cout << endl;
    cout<<"DFS traversal of Graph:-";
    cout << endl;
    g.dfstraversal(n);
    return 0;
}