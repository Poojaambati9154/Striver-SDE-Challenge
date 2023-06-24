#include<bits/stdc++.h>
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    sort(arr.begin(),arr.end());
    string s="";
    string a=arr[0];
    string b=arr[n-1];
    int i=0;
    int j=0;
    while(i<a.length() && j<b.length()){
        if(a[i]!=b[j])break;
        s+=a[i];
        i++;
        j++;
    }
    return s;
}


