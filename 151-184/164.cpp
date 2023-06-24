bool f(int node,int col,vector<int>adj[],vector<int>&color){
	color[node]=col;
	for(auto i: adj[node]){
		if(color[i]==-1){
			
			if(f(i,!col,adj,color)==false)return false;
		}
		else if(color[i]==color[node])return false;
	}
	return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	int n=edges.size();
	vector<int>color(n,-1);
	vector<int>adj[n+1];
	for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (edges[i][j]) {
        adj[i].push_back(j);
        adj[j].push_back(i);
      }
    }
  }
	for(int i=0;i<n;i++){
		if(color[i]==-1){
			if(f(i,0,adj,color)==false)return false;
		}
	}
	return true;
}