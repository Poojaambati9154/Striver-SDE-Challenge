#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	stack<string>st;
	for(int i=0;i<str.length();i++){
		string s="";
		while(str[i]!=' ' && i<str.size()){
			s+=str[i];
			i++;
		}
		if(!s.empty()){
			st.push(s);
		}
	}
	string ans="";
	while(!st.empty()){
		ans+=st.top();
		ans.push_back(' ');
		st.pop();
	}
	return ans;
}