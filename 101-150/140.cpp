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
bool f(BinaryTreeNode<int> *root, long long minVal, long long maxVal) {
    if(!root)return true;

    if(root->data < minVal || root->data > maxVal)
        return false;
    
    return f(root->left, minVal, root->data) && f(root->right, root->data, maxVal);
}

bool validateBST(BinaryTreeNode<int> *root) {
    return f(root, LONG_MIN, LONG_MAX);
}