#include <bits/stdc++.h> 
int compareVersions(string a, string b) 
{
    // Write your code here
    int n=a.size();
    int m=b.size();
    int i=0;
    int j=0;
    while(i<n || j<m){
        
        long long  x=0;
        long long  y=0;
        while(i<n && a[i]!='.'){
            x=(x*10)+(a[i]-'0');
            i++;
        }
        while(j<m && b[j]!='.'){
            y=(y*10)+(b[j]-'0');
            j++;
        }
        if(x>y)return 1;
         if(y>x)return -1;
        i++;
        j++;
    }
    return 0;
}