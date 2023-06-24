#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    int n=v.size();
    vector<vector<int>>ans;
    for(int i=0;i<(1<<n);i++){
        vector<int>ve;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                ve.push_back(v[j]);
            }
            
        }
       
        if(ve.size()>0){
        ans.push_back(ve);
        }
       
    }
    sort(ans.begin(),ans.end());
    return ans;
}