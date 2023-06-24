#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int ind1=0;
    int ind2=0;
    for(int i=n-1;i>0;i--){
        if(p[i]>p[i-1]){
            ind1=i-1;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(p[i]>p[ind1]){
            ind2=i;
            break;
        }
    }
    if(ind1==ind2){
        reverse(p.begin(),p.end());
        return p;
    }
    swap(p[ind1],p[ind2]);
    reverse(p.begin()+ind1+1,p.end());
    return p;
}