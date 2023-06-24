#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
	priority_queue<int>mx;
	priority_queue<int,vector<int>,greater<int>>mn;
	vector<int>v;
	for(int i=0;i<n;i++){
      if (mx.size() == 0) {
        mx.push(arr[i]);
      }
	  else if(mx.top()<arr[i]){
		  mn.push(arr[i]);
	  }
	  else{
		  mx.push(arr[i]);
	  }
	  if(mx.size()-mn.size()==2){
		  mn.push(mx.top());
		  mx.pop();
	  }
	  if(mn.size()-mx.size()==1){
		  mx.push(mn.top());
		  mn.pop();
	  }
	  if(mx.size()==mn.size()){
        v.push_back((mx.top()+mn.top())/2);
	  }
	  else{
		  v.push_back(mx.top());
	  }
    }
	return v;
}
