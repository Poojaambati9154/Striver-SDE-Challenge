#include <bits/stdc++.h> 
bool bs(vector<int>positions,int n,int c,int mid){
	int dis=positions[0];
	int cnt=1;
	for(int i=1;i<n;i++){
		if(positions[i]-dis>=mid){
			cnt++;
			dis=positions[i];
			if(cnt==c){
				return true;
			}
		}
	}
	return false;
	
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
	sort(positions.begin(),positions.end());
	int low=1;
	int high=*max_element(positions.begin(),positions.end());
	int ans;
	while(low<=high){
		int mid=(low+high)/2;
		if(bs(positions,n,c,mid)){
           ans=mid;
		   low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	return ans;
}