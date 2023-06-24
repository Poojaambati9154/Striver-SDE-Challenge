#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    if(str.length()==0)return 0;
    int i=0;
    while(i<str.size() && str[i]==' ')i++;
    str=str.substr(i);
    int sign=+1;
    if(str[0]=='-')sign=-1;
    long ans=0;
   // int maxi=INT_MAX;
   //int mini=INT_MIN;
    if(str[0]=='+' || str[0]=='-'){i=1;}
    else {i=0;}
    while(i<str.size()){
      if (isdigit(str[i])) {
        ans = ans * 10 + str[i] - '0';
      }
        //if(sign==-1 && -1*ans<mini)return mini;
       // if(sign==+1 && ans>maxi)return maxi;
        i++;
    }
    return (int)(sign*ans);
}