#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
    if(root==NULL)return NULL;
    stack<TreeNode<int> *>s;
    s.push(root);
    while(!s.empty()){
        TreeNode<int> *node=s.top();
        s.pop();
        if(node->right){
            s.push(node->right);
        }
        if(node->left){
            s.push(node->left);
        }
        if(!s.empty()){
            node->right=s.top();
            node->left=NULL;
        }
    }
    return root;
}