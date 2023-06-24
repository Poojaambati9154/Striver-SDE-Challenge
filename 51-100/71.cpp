#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	priority_queue<pair<int,pair<int,int>>>pq;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	set<pair<int,int>>s;
	pq.push({a[n-1]+b[n-1],{n-1,n-1}});
	s.insert({n-1,n-1});
	vector<int>v;
	while(k--){
		int sum=pq.top().first;
		int x=pq.top().second.first;
		int y=pq.top().second.second;
		pq.pop();
		v.push_back(sum);
		if(x>0 && y>0 &&s.find({x-1,y})==s.end()){
			pq.push({a[x-1]+b[y],{x-1,y}});
			s.insert({x-1,y});
		}
		if(x>0 && y>0 && s.find({x,y-1})==s.end()){
			pq.push({a[x]+b[y-1],{x,y-1}});
			s.insert({x,y-1});
		}
	}
	return v;
}