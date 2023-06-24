#include <bits/stdc++.h> 
void f(int ind,vector<int>&num,vector<int>&ans,int sum){
    if(ind==num.size()){
        ans.push_back(sum);
        return;
    }
    f(ind+1,num,ans,sum+num[ind]);
    f(ind+1,num,ans,sum);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int>ans;
    f(0,num,ans,0);
    sort(ans.begin(),ans.end());
    return ans;

}