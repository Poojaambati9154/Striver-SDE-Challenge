#include<bits/stdc++.h>

string exp(string str,int s,int e){
    while(s>=0 && e<str.size()){
        if(str[s]!=str[e])break;
        s--;
        e++;
        
    }
    
        return str.substr(s+1,e-s-1);
    
}
string longestPalinSubstring(string str)
{
    // Write your code here.
    string ans="";
    for(int i=0;i<str.size();i++){
       string odd=exp(str,i-1,i+1);
       if(odd.size()>ans.size())ans=odd;
    }
    for(int i=0;i<str.size();i++){
       string even=exp(str,i-1,i);
       if(even.size()>ans.size())ans=even;
    }
    return ans;
}