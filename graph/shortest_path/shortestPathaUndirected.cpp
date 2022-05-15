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

    vector<int> sPath(int V , int s ,int f)
    {
        unordered_map<int,int> parent;
        queue<int> q;
        unordered_map<int, bool> visited;
        vector<int> ans;
        visited[s] = true;
        parent[s] = -1;
        q.push(s);

        while(q.empty() == false){
            int front = q.front();
            q.pop();
            for(auto i:adj[front]){
                if(!visited[i]){
                    q.push(i);
                    parent[i] = front;
                    visited[i] = true;
                }
            }
        }

        int currNode = f;
        ans.push_back(currNode);
        while(currNode != s){
            currNode = parent[currNode];
            ans.push_back(currNode);
        }

        reverse(ans.begin(),ans.end());

        return ans;

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

    //pass start and end node to find distance 
//     Test case :- 
//     9 8
// 1 2
// 1 3
// 1 4
// 2 5
// 3 8
// 4 6
// 5 8
// 6 7
// 7 8
    vector<int> ans = obj.sPath(N, 1, 8);

    for(auto it:ans){
        cout<<it<<" ";
    }

    return 0;
}