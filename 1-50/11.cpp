#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int>cnt(n+1,0);
	for(int i=0;i<n;i++){
       cnt[arr[i]]++;
	}
	int rep=-1;
	int mis=-1;
	for(int i=1;i<=n;i++){
		if(cnt[i]==0)mis=i;
		else if(cnt[i]>1)rep=i;
	}
	return {mis,rep};
	
}
