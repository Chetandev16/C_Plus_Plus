#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adj;

    void add(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool checkcycle(int node, int parent, unordered_map<int, bool> &visited)
    {
        visited[node] = true;
        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                bool ans = checkcycle(neighbour, node, visited);
                if (ans)
                {
                    return true;
                }
            }
            else if (neighbour != parent)
            {
                return true;
            }
        }

        return false;
    }

    bool isCycle(int V)
    {

        unordered_map<int, bool> visited;
        bool ans = false;
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                ans = checkcycle(i, -1, visited);
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
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        obj.add(u, v);
    }

    bool ans = obj.isCycle(V);
    if (ans)
        cout << "1\n";
    else
        cout << "0\n";

    return 0;
}