bool f(int node,vector<int>&vis,vector<int>&pathvis,vector<int>adj[]){
  vis[node]=1;
  pathvis[node]=1;
  for(auto i : adj[node]){
    if(!vis[i]){
      if(f(i,vis,pathvis,adj))return true;
    }
    else if(pathvis[i]==1)return true;
  }
  pathvis[node]=0;
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  vector<int>adj[n+1];
  for(auto i : edges){
    int u=i.first;
    int v=i.second;
    adj[u].push_back(v);
   
  }
  vector<int>vis(n+1,0);
  vector<int>pathvis(n+1,0);
  for(int i=0;i<n;i++){
    if(!vis[i]){
      if(f(i,vis,pathvis,adj)==true)return true;
    }
  }
  return false;
}