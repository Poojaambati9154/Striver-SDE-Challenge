#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int>mp;
    int cnt=0;
    int xorr=0;
    for(int i=0;i<arr.size();i++){
        xorr=xorr^arr[i];
        if(xorr==x){
            cnt++;
        }
        
            if(mp.find(xorr^x)!=mp.end()){
                cnt+=mp[xorr^x];
            } 
              mp[xorr]++;
            
        
    }  
    return cnt;
}