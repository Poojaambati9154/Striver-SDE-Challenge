#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for(auto i=mp.begin();i!=mp.end();i++){
        pq.push({i->second,i->first});
        if(pq.size()>k){
            pq.pop();
        }
    }
    vector<int>ans;
    while(pq.size()>0){
       ans.push_back(pq.top().second);
       pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}