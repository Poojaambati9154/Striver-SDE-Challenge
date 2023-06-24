#include <bits/stdc++.h> 
vector<int> BFS(int v, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int>adj[v+1];
    for(auto i: edges){
        int u=i.first;
        int v=i.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<v;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    vector<int>vis(v,0);
    vector<int>ve;
    queue<int>q;
    for(int i=0;i<v;i++){
      if (!vis[i]) {
        q.push(i);
        vis[i] = 1;
      
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ve.push_back(node);
            for(auto it : adj[node]){
              if (!vis[it]) {
                q.push(it);
                vis[it] = 1;
              }
            }
        }
      }
    }
    return ve;
}