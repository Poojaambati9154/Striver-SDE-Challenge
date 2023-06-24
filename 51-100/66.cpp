#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
    if(n<m)return ninjaAndLadoos(row2,row1,n,m,k);
    int low=max(0,k-n);
    int high=min(k,m);
    while(low<=high){
        int c1=(low+high)/2;
        int c2=k-c1;
        int l1,l2,r1,r2;
        if(c1==0)l1=INT_MIN;
        else l1=row1[c1-1];
        if(c2==0)l2=INT_MIN;
        else l2=row2[c2-1];
        if(c1==m)r1=INT_MAX;
        else r1=row1[c1];
        if(c2==n)r2=INT_MAX;
        else r2=row2[c2];

        if(l1<=r2 && l2<=r1){
            return max(l1,l2);
        }
        else if(l1>r2){
            high=c1-1;
        }
        else{
            low=c1+1;
        }
    }
    return 0;
}