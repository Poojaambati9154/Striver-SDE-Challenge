#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxi=0;
    int mini=prices[0];
    for (int i = 1; i < prices.size(); i++) {
      int cost = prices[i] - mini;
      maxi = max(maxi, cost);
      mini = min(mini, prices[i]);
    }
    return maxi;
}