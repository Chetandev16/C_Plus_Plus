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
    
    
    bool topoSort(int V)
    {
        vector<int> indegree(V);
        queue<int> q;
        int count = 0;

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
            count++;

            for (auto i : adj[front])
            {
                indegree[i]--;
                if (indegree[i] == 0)
                {
                    q.push(i);
                }
            }
        }

        if(count == V){
            return false;
        }else{
            return true;
        }
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
    bool ans = obj.topoSort(N);

    if (ans)
    {
        cout << "Cycle Present" << endl;
    }
    else
    {
        cout << "No cycle detected" << endl;
    }

    return 0;
} 