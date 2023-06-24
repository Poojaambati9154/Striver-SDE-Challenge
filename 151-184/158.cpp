void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&ve){
    vis[node]=1;
    ve.push_back(node);
    for(auto i :adj[node]){
        if(!vis[i]){
            dfs(i,vis,adj,ve);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int>adj[V+1];
    for(auto i:edges){
        int u=i[0];
        int v=i[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>vis(V,0);
    vector<vector<int>>ans;
    for(int i=0;i<V;i++){
        vector<int>ve;
        if(!vis[i]){
            dfs(i,vis,adj,ve);
            ans.push_back(ve);
        }
    }
    return ans;
}