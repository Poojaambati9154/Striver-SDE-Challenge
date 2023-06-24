#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum=0;
    long long ans=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        ans=max(sum,ans);
        //-7 -8 -16 -4 -8 -5 -7 -11 -10 -12 -4 -6 -4 -16 -10 
        
    }
    return ans;
}