#include<bits/stdc++.h>
void f(int ind,vector<int>arr,vector<int>&ds,vector<vector<int>>&ans,int k){
    if(ind==arr.size()){
        if(k==0){
            ans.push_back(ds);
        }
        return;
    }
    //if(arr[ind]<=k){
        ds.push_back(arr[ind]);
        f(ind+1,arr,ds,ans,k-arr[ind]);
        ds.pop_back();
    //}
    f(ind+1,arr,ds,ans,k);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<int>ds;
    vector<vector<int>>ans;
    f(0,arr,ds,ans,k);
    return ans;

}