#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    unordered_map<long long ,pair<int,int>>m;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long sum=arr[i]+arr[j];
            if(m.find(target-sum)!=m.end()){
                if(m[target-sum].first!=i && m[target-sum].second!=i
                &&m[target-sum].first!=j && m[target-sum].second!=j){
                    return "Yes";
                }
            }
            m[sum]={i,j};
        }
    }
    return "No";
}
