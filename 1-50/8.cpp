#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &a)
{
    // Write your code here.
    sort(a.begin(),a.end());
    vector<vector<int>>ans;
    ans.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        if(ans[ans.size()-1][1]>=a[i][0]){
            ans[ans.size()-1][1]=max( ans[ans.size()-1][1],a[i][1]);
        }
        else{
            ans.push_back(a[i]);
        }
    }
    return ans;
}
