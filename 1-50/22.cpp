#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here
  unordered_map<int,int>mp;
  int sum=0;
  int maxlen=0;
 
  for(int i=0;i<arr.size();i++){
    sum+=arr[i];
    if(sum==0){
      maxlen=i+1;
    }
    else{
      
      if (mp.find(sum) != mp.end()) {
         maxlen = max(maxlen, i - mp[sum]);
      } 
      else {
        mp[sum]=i; 
      }
    }
  }
  return maxlen;

}