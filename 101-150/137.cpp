#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root==NULL)return false;
    BinaryTreeNode<int> *node=root;
    while (node != NULL) {
      if (node->data == x)
        return true;
      if (x > node->data)
        node = node->right;
      else
        node = node->left;
    }
    return false;

}