#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int>s;
    for(auto i :arr){
        s.insert(i);
    }
    int longstreak=0;
    for(auto i : arr){
       if(s.find(i-1)==s.end()){
           int curr=i;
           int currstreak=1;

           while (s.find(curr + 1) != s.end()) {
             curr = curr + 1;
             currstreak=currstreak+1;
           }

           longstreak = max(longstreak, currstreak);
        }
    }
    return longstreak;
}