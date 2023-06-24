#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    stack<pair<BinaryTreeNode<int> *,int>>s;
    vector<vector<int>>v;
    vector<int>pre,in,pos;
    s.push({root,1});
    if(root==NULL)return v;
    while(!s.empty()){
      auto it =s.top();
      s.pop();
      if(it.second==1){
          pre.push_back(it.first->data);
          it.second++;
          s.push(it);
          if(it.first->left){
              s.push({it.first->left,1});
          }
      }
      else if(it.second==2){
          in.push_back(it.first->data);
           it.second++;
           s.push(it);
           if(it.first->right){
               s.push({it.first->right,1});
           }
      }
      else{
          pos.push_back(it.first->data);
      }
    }
    v.push_back(in);
    v.push_back(pre);
    v.push_back(pos);
    return v;
}