#include<bits/stdc++.h>
void f(int ind,vector<int>&arr,vector<int>&ds,vector<vector<int>>&ans,int target){
		if(target==0){
			ans.push_back(ds);
			return;
		}
		

	for(int i=ind;i<arr.size();i++){
		if(i!=ind && arr[i]==arr[i-1])continue;

        if (arr[i] <= target) {
          ds.push_back(arr[i]);
          f(i + 1, arr, ds, ans, target - arr[i]);
          ds.pop_back();
        }
        
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
	vector<int>ds;
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	f(0,arr,ds,ans,target);
	return ans;


}
