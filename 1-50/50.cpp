#include <bits/stdc++.h> 
void f(int ind,vector<int>&arr,vector<int>&v,vector<vector<int>>&ans,int n){
       ans.push_back(v);
       
    for(int i=ind;i<n;i++){
        if(i!=ind && arr[i]==arr[i-1]){
            continue;
        }
        v.push_back(arr[i]);
        f(i+1,arr,v,ans,n);
        v.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int>v;
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    f(0,arr,v,ans,n);
    return ans;
}