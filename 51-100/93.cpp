#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    vector<int>ans;
    deque<int>d;
    for(int i=0;i<nums.size();i++){
        if(!d.empty() && d.front()==i-k){
            d.pop_front();
        }
        while(!d.empty() && nums[d.back()]<=nums[i]){
            d.pop_back();
        }
        d.push_back(i);
        if(i>=k-1){
            ans.push_back(nums[d.front()]);
        }
    }
    return ans;
}