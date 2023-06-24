#include <bits/stdc++.h> 
void f(int ind,string &s,string &ds,map<string,int>&mp,vector<string>&ans){
    if(ind==s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<s.size();i++){
        string temp=s.substr(ind,i-ind+1);
       // temp+=s[i];
        if(mp[temp]>=1){
           int n=ds.size(); 
           ds+=temp+" ";
           f(i+1,s,ds,mp,ans);
           ds.erase(n);
        }
    }
}
vector<string> wordBreak(string &s, vector<string> &dictionary)
{
    // Write your code here
    string ds="";
    vector<string>ans;
    map<string,int>mp;
    for(int i=0;i<dictionary.size();i++){
        mp[dictionary[i]]++;
    }
    f(0,s,ds,mp,ans);
    return ans;

}