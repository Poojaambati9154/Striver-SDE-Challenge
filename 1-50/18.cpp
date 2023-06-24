#include <bits/stdc++.h> 
int merge(vector<int> &arr,int l,int mid,int r){
	int cnt=0;
	int j=mid+1;
	for(int i=l;i<=mid;i++){
		while(j<=r && arr[i]>2*arr[j]){
			
			j++;
		}
		cnt+=(j-(mid+1));

	}
	vector<int>temp;
	int x=l;
	int y=mid+1;
	while(x<=mid && y<=r){
		if(arr[x]<=arr[y]){
           temp.push_back(arr[x]);
		   x++;
		}
		else{
			temp.push_back(arr[y]);
			y++;
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
int merge_sort(vector<int> &arr,int l,int r){
	int cnt=0;
	if(l<r){
		int mid=(l+r)/2;
		cnt+=merge_sort(arr,l,mid);
		cnt+=merge_sort(arr,mid+1,r);
		cnt+=merge(arr,l,mid,r);
	}
	return cnt;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
	return merge_sort(arr,0,n-1);
}