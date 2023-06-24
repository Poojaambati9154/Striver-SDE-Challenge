#include<bits/stdc++.h>
using namespace std;
void f(int col,vector<vector<int>>&ds,vector<vector<int>>&ans,
vector<int>&leftrow,vector<int>&lower,vector<int>&upper,int n){
    if(col==n){
        vector<int>v;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v.push_back(ds[i][j]);
            }  
        }
       ans.push_back(v);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0 && lower[row+col]==0 && upper[n-1+(col-row)]==0){
            
            leftrow[row]=1;
            lower[row+col]=1;
            upper[n-1+(col-row)]=1;
            ds[row][col]=1;
            f(col+1,ds,ans,leftrow,lower,upper,n);
            
            leftrow[row]=0;
            lower[row+col]=0;
            upper[n-1+col-row]=0;
            ds[row][col]=0;

        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>>ans;
    vector<vector<int>>ds(n,vector<int>(n));
    vector<int>leftrow(n,0);
    vector<int>lower(2*n-1,0);
    vector<int>upper(2*n-1,0);
    f(0,ds,ans,leftrow,lower,upper,n);
    return ans;
}