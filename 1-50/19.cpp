#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int target){
   // Write your code here.
   unordered_map<int,int>m;
   
   vector<vector<int>>ans;
   for(int i=0;i<arr.size();i++){
      vector<int>v;
      if(m.find(target-arr[i])!=m.end()){
         int x=m[target-arr[i]];
         while (x--) {
           v.push_back(min(arr[i], target - arr[i]));
           v.push_back(max(arr[i], target - arr[i]));
           ans.push_back(v);
         }
      }
       m[arr[i]]++;
      
   }
   sort(ans.begin(),ans.end());
   return ans;
}