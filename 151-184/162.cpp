#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    // Write your code here
    vector<int>adj[v+1];
    for(auto i :edges){
        int u=i[0];
        int v=i[1];
        adj[u].push_back(v);
    }
    vector<int>indegree(v,0);
    queue<int>q;
    for(int i=0;i<v;i++){
        for(auto j :adj[i]){
            indegree[j]++;
        }
    }
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    vector<int>ve;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        ve.push_back(node);
        for(auto i : adj[node]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
    return ve;
}