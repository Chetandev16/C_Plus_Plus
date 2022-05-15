#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void add(int u, int v, int w)
    {
        adj[u].push_back(make_pair(v, w));
    }

    void printList()
    {
        cout << "ADJ LIST:- \n";
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << "[" << j.first << "," << j.second << "],";
            }
            cout << endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &s)
    {
        visited[node] = true;

        for (auto it : adj[node])
        {
            if (!visited[it.first])
            {
                dfs(it.first, visited, s);
            }
        }

        s.push(node);
    }

    void sPath(int src, vector<int> &dist, int n, stack<int> &s)
    {

        dist[src] = 0;

        while (s.empty() == false)
        {
            int top = s.top();
            s.pop();

            if (dist[top] != INT_MAX)
            {
                for (auto i : adj[top])
                {
                    if (dist[top] + i.second < dist[i.first])
                    {
                        dist[i.first] = dist[top] + i.second;
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
            g.dfs(i, visited, s);
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