#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>>pq;

    for(int i=0;i<kArrays.size();i++){
        pq.push({kArrays[i][0],{i,0}});
    }
    vector<int>ans;
    while(pq.size()>0){
        int val=pq.top().first;
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        ans.push_back(val);

        //if the next greater element exists take it.....
        if(y+1<kArrays[x].size()){
            pq.push({kArrays[x][y+1],{x,y+1}});
        }
    }
    return ans;
}
