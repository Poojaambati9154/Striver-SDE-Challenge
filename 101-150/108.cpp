#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.
    int n=str1.size();
    int m=str2.size();
    if(n!=m)return false;
    int a[26]={0};
    int b[26]={0};
    for(int i=0;i<n;i++){
        a[str1[i]-'a']++;
        b[str2[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}