#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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
void inorder(BinaryTreeNode<int>* root,vector<int>&v){
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    vector<int>v;
    inorder(root,v);
    BinaryTreeNode<int>*head=new BinaryTreeNode<int>(-1);
    BinaryTreeNode<int>*curr=head;
    BinaryTreeNode<int>*prev=NULL;
    for(auto i : v){
        BinaryTreeNode<int>*node=new BinaryTreeNode<int>(i);
        curr->right=node;
        curr->left=prev;
        prev=curr;
        curr=curr->right;
    }
    curr->right=NULL;
    return head->right;
}