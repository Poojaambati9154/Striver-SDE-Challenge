#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here
    vector<int>v;
    unordered_map<int,int>mp;
    int i=0;
    int j=0;
    while(j<arr.size()){
        mp[arr[j]]++;
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            v.push_back(mp.size());
            mp[arr[i]]--;
            if(mp[arr[i]]==0){
                mp.erase(arr[i]);
            }
            i++;
            j++;
        }

    }
    return v;
	
}
