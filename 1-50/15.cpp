#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int cnt=0;
	int ele=0;
	for(int i=0;i<n;i++){
		if(cnt==0){
			
			ele=arr[i];
			cnt=1;
		}
		if(ele==arr[i]){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	cnt=0;
	for(int i=0;i<n;i++){
		if(ele==arr[i]){
			cnt++;
		}
	}
	if(cnt>n/2)return ele;
	else return -1;
	
	
	
}