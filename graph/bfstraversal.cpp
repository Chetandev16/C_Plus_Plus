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

    void bfs(int n)
    {
        unordered_map<int, bool> visited;
        cout << "BFS IN GRAPH:-" << endl;
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                bfsprint(visited, i);
            }
        }
    }

    void bfsprint(unordered_map<int, bool> &visited, int node)
    {
        queue<int> q;
        q.push(node);
        visited[node] = true;
        while (q.empty() == false)
        {
            int frontnode = q.front();
            q.pop();
            cout << frontnode << " ";

            for (auto it : adj[frontnode])
            {
                if (!visited[it])
                {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
    }

    void printGraph()
    {
        cout << "PRINTING OF GRAPH" << endl;
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
    int m, n;
    graph g;
    cin >> n;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.add(u, v, false);
    }

    g.printGraph();
    g.bfs(n);

    // vector<int> ans = solve(n)
    return 0;
}