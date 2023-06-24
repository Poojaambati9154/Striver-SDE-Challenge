#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
    int l=0;
    int r=n-1;
    long maxleft=0;
    long maxright=0;
    long ans=0;
    while(l<=r){
        if(arr[l]<=arr[r]){
            if(arr[l]>maxleft){
                maxleft=arr[l];
            }
            else{
                ans+=maxleft-arr[l];
                l++;
            }
        }
        else{
            if(arr[r]>maxright){
                maxright=arr[r];
            }
            else{
                ans+=maxright-arr[r];
                r--;
            }
        }
    }
    return ans;
}