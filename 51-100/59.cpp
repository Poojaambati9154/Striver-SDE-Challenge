#include <bits/stdc++.h> 

void f(int i,int j,vector<vector<int>>&ans,
vector<vector<int> > &maze, vector<vector<int>>&vis,int n){
  if(i==n-1 && j==n-1){
    vector<int>ds;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        ds.push_back(vis[i][j]);
      }
    }
    ans.push_back(ds);
    return;
  }
  if(i+1<n && !vis[i+1][j] && maze[i+1][j]==1){
    vis[i+1][j]=1;
    f(i+1,j,ans,maze,vis,n);
    vis[i+1][j]=0;
  }
  if(i-1>=0 && !vis[i-1][j] && maze[i-1][j]==1){
    vis[i-1][j]=1;
    f(i-1,j,ans,maze,vis,n);
    vis[i-1][j]=0;
  }
  if(j+1<n && !vis[i][j+1] && maze[i][j+1]==1){
    vis[i][j+1]=1;
    f(i,j+1,ans,maze,vis,n);
    vis[i][j+1]=0;
  }
  if(j-1>=0 && !vis[i][j-1] && maze[i][j-1]==1){
    vis[i][j-1]=1;
    f(i,j-1,ans,maze,vis,n);
    vis[i][j-1]=0;
  }
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
  vector<vector<int>>ans;
  vector<vector<int>>vis(n,vector<int>(n,0));
  if(maze[0][0]==1){
    vis[0][0]=1;
    f(0,0,ans,maze,vis,n);
  }
  return ans;
}