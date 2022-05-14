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

    void topsort(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;

        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour])
            {
                topsort(neighbour, visited, s);
            }
        }

        s.push(node);
    }

    vector<int> topoSort(int V)
    {
        stack<int> s;
        vector<int> ans;
        unordered_map<int, bool> visited;
        for (int i = 0; i < V; i++)
        {
            if (!visited[i])
            {
                topsort(i, visited, s);
            }
        }

        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }

        return ans;
    }

    bool check(int V, vector<int> &res)
    {
        if (V != res.size())
            return 0;

        vector<int> map(V, -1);
        for (int i = 0; i < V; i++)
        {
            map[res[i]] = i;
        }
        for (int i = 0; i < V; i++)
        {
            for (int v : adj[i])
            {
                if (map[i] > map[v])
                    return 0;
            }
        }
        return 1;
    }
};

int main()
{
    Graph obj;

    int N, E;
    cin >> E >> N;
    int u, v;
    for (int i = 0; i < E; i++)
    {
        cin >> u >> v;
        obj.add(u, v);
    }

    vector<int> res = obj.topoSort(N);

    bool c = obj.check(N, res);
    if(c){
        cout<<"valid Topological sort";
    }else{
        cout<<"invalid Topological sort";
    }

    return 0;
}