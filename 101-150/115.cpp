#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    vector<int>v;
    if(root==NULL)return v;
    map<int,int>m;
    queue<pair<BinaryTreeNode<int> * ,int>>q;
    q.push({root,0});
    while(!q.empty()){
        BinaryTreeNode<int> * node=q.front().first;
        int l=q.front().second;
        q.pop();
        m[l]=node->data;
        if(node->left){
            q.push({node->left,l-1});
        }
        if(node->right){
            q.push({node->right,l+1});
        }
    }
    for(auto i: m){
        v.push_back(i.second);
    }
    return v;
    
}
