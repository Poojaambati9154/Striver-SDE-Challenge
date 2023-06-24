#include <bits/stdc++.h> 
bool pal(string str,int s,int e){
    while(s<=e){
       if(str[s++]!=str[e--]){
           return false;
       }

    }
    return true;
}
void f(int ind,string &s,vector<string>&ds,vector<vector<string>>&ans){
    if(ind==s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<s.size();i++){
        if(pal(s,ind,i)==true){
           ds.push_back(s.substr(ind,i-ind+1));
           f(i+1,s,ds,ans);
           ds.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<string>ds;
    vector<vector<string>>ans;
    f(0,s,ds,ans);
    return ans;
}