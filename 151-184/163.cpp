void dfs(int i,int j,vector<vector<int>>&vis,int** arr,int n,int m){
   
   vis[i][j]=1;
   for(int x=-1;x<=1;x++){
      for(int y=-1;y<=1;y++){
         int r=i+x;
         int c=j+y;
         if(r>=0 && r<n && c>=0 && c<m &&!vis[r][c] && arr[r][c]==1){
            dfs(r,c,vis,arr,n,m);
            vis[r][c]=1;
         }
      }
   }

}
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
   int cnt=0;
   vector<vector<int>>vis(n,vector<int>(m,0));
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         if(!vis[i][j] && arr[i][j]==1){
            dfs(i,j,vis,arr,n,m);
            cnt++;
         }
      }
   }
   return cnt;
}
