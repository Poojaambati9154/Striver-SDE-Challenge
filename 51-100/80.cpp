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
int maximumXor(vector<int> A)
{
    // Write your code here.   
    Trie t;
    for(int i=0;i<A.size();i++){
        t.insert(A[i]);
    }
    int ans=0;
    for(int i=0;i<A.size();i++){
       ans=max(ans,t.getmax(A[i]));
    }
    return ans;
}