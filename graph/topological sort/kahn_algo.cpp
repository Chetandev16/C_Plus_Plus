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
    
    
    vector<int> topoSort(int V)
    {
        vector<int> indegree(V);
        queue<int> q;
        vector<int> ans;

        for (int i = 0; i < V; i++)
        {
            for (auto it : adj[i])
            {
                indegree[it]++;
            }
        }

        for (int i = 0; i < V; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        while (q.empty() == false)
        {
            int front = q.front();
            q.pop();
            ans.push_back(front);

            for (auto i : adj[front])
            {
                indegree[i]--;
                if (indegree[i] == 0)
                {
                    q.push(i);
                }
            }
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

    vector<int> adj[N];

    for (int i = 0; i < E; i++)
    {
        cin >> u >> v;
        obj.add(u, v);
    }

    vector<int> res = obj.topoSort(N);
    bool ans = obj.check(N, res);

    if (ans)
    {
        cout << "Valid Topological sort" << endl;
    }
    else
    {
        cout << "Invalid Topological sort" << endl;
    }

    return 0;
} 