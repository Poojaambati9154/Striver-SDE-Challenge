#include <bits/stdc++.h> 
string count(int n){
	string str="";
	if(n==1){
		return "1";
	}
	else{
		string s=count(n-1);
		int cnt=1;
		for(int i=0;i<s.size();i++){
            while (i < s.size() - 1 && s[i] == s[i + 1]) {
              cnt++;
              i++;
            }
            str += to_string(cnt);
            str += (s[i]);
            cnt = 1;
        }
    }
    return str;
}
string writeAsYouSpeak(int n) 
{
	// Write your code here.	
	return count(n);
}