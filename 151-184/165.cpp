#include<bits/stdc++.h>
void f(int node,vector<int>adj[],vector<int>&vis,stack<int>&s){
    vis[node]=1;
    for(auto i :adj[node]){
        if(!vis[i]){
            f(i,adj,vis,s);
        }
    }
    s.push(node);
}
void g(int node,vector<int>adjr[],vector<int>&vis,vector<int>&ve){
   vis[node]=1;
   ve.push_back(node);
   for(auto i: adjr[node]){
       if(!vis[i]){
           g(i,adjr,vis,ve);
       }
   }
}
vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges)
{
    // Write your code here.
    vector<int>vis(n,0);
    vector<int>adj[n+1];
    for(auto i: edges){
        adj[i[0]].push_back(i[1]);
    }
    stack<int>s;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            f(i,adj,vis,s);
        }
    }
    vector<int>adjr[n+1];
    for(int i=0;i<n;i++){
        vis[i]=0;
        for(auto it : adj[i]){
            adjr[it].push_back(i);
        }
    }
    vector<vector<int>>ans;
    while(!s.empty()){
       int node=s.top();
       s.pop();
       vector<int>ve;
       if(!vis[node]){
           g(node,adjr,vis,ve);
       }
       ans.push_back(ve);

    }
    return ans;
}