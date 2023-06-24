#include <bits/stdc++.h> 
long long merge(long long *arr,int l,int mid,int r){
    int x=l;
    int y=mid+1;
    vector<long long>temp;
    long long  cnt=0;
    while(x<=mid && y<=r){
        if(arr[x]<=arr[y]){
            temp.push_back(arr[x]);
            x++;
        }
        else{
            temp.push_back(arr[y]);
            y++;
            cnt=cnt+(mid+1-x);
        }
    }
    while(x<=mid){
        temp.push_back(arr[x]);
            x++;
    }
    while(y<=r){
       temp.push_back(arr[y]);
            y++;
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
    return cnt;
}
long long merge_sort(long long *arr,int l,int r){
    long long  cnt=0;
    if(r>l){
        int mid=(l+r)/2;
        cnt+=merge_sort(arr,l,mid);
        cnt+=merge_sort(arr,mid+1,r);
        cnt+=merge(arr,l,mid,r);
    }
    return cnt;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
   
   return merge_sort(arr,0,n-1);
}