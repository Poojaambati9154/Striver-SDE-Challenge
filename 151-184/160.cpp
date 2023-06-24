bool f(int node,int parent,vector<int>&vis,vector<int>adj[]){
    vis[node]=1;
    for(auto i:adj[node]){
        if(!vis[i]){
            if(f(i,node,vis,adj))return true;
        }
        else if(parent!=i)return true;
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int>adj[n+1];
    for(auto i:edges){
        int u=i[0];
        int v=i[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(n+1,0);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            if(f(i,-1,vis,adj))return "Yes";
        }
    } 
    return "No";
}
