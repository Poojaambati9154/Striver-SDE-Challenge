#include <bits/stdc++.h> 
bool ispossible(vector<vector<int>> &mat,int node,int color[],int c){
    int n=mat.size();
    for(int i=0;i<n;i++){
        if(i!=node && mat[i][node]==1 && color[i]==c)return false;
    }
    return true;
}
bool f(int node,vector<vector<int>> &mat,int color[],int m,int n){
    if(node==n){
        return true;
    }
    for(int i=1;i<=m;i++){
        if(ispossible(mat,node,color,i)==true){
            color[node]=i;
            if(f(node+1,mat,color,m,n)==true){
                return true;
            }
            else{
                color[node]=0;
            }
        }
        
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
    int color[n]={0};
    if(f(0,mat,color,m,n)==true)return "YES";
    else return "NO";
}