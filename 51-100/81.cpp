#include <bits/stdc++.h> 
struct Node{
 Node* links[2];
 bool iscontain(int bit){
     return (links[bit]!=NULL);
 }
 void put(int bit,Node* node){
    links[bit]=node;
 }
 Node* get(int bit){
     return links[bit];
 }
};
class Trie{
  public:
  Node* root;
  Trie(){
     root=new Node();
  }
  void insert(int n){
      Node* node=root;
      for(int i=31;i>=0;i--){
          int bit=(n>>i)&1;
          if(!node->iscontain(bit)){
              node->put(bit,new Node());
          }
          node=node->get(bit);
      }
  }
  int getmax(int n){
      Node* node=root;
      int ans=0;
      for(int i=31;i>=0;i--){
          int bit=(n>>i)&1;
          if(node->iscontain(1-bit)){
              ans=ans|(1<<i);
              node=node->get(1-bit);
          }
          else{
              node=node->get(bit);
          }
      }
      return ans;
  }
};
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
    sort(arr.begin(),arr.end());
	vector<pair<int,pair<int,int>>>oq;
	for(int i=0;i<queries.size();i++){
		oq.push_back({queries[i][1],{queries[i][0],i}});
	}
	sort(oq.begin(),oq.end());
	vector<int>ans(queries.size(),0);
	int ind=0;
	Trie t;
	for(int i=0;i<queries.size();i++){
		int ai=oq[i].first;
		int xi=oq[i].second.first;
		int que_id=oq[i].second.second;
		while(ind<arr.size() && arr[ind]<=ai){
            t.insert(arr[ind]);
            ind++;
		}
		if(ind==0)ans[que_id]=-1;
		else ans[que_id]=t.getmax(xi);
	}
	return ans;
}