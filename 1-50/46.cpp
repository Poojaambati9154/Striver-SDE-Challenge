#include <bits/stdc++.h> 
bool static comparator(pair<int, int>v1,pair<int, int>v2){
    double a=(double)(v1.second)/(double)(v1.first);
    double b=(double)(v2.second)/(double)(v2.first);
    return a>b;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comparator);
    int curr=0;
    double final=0.0;
    for(int i=0;i<n;i++){
        if(curr+items[i].first<=w){
            curr+=items[i].first;
            final+=items[i].second;
        }
        else{
            int rem=w-curr;
            final+=((double)(items[i].second)/(double)(items[i].first))*(double)rem;
            break;
        }
    }
    return final;
}