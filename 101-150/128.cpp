#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
bool isleaf(TreeNode<int>* root){
    if(root->left || root->right)return false;
    return true;
}
void left(TreeNode<int>* root,vector<int>&v){
    TreeNode<int>* node=root->left;
    while(node!=NULL){
    if(!isleaf(node)){
        v.push_back(node->data);
    }
    if(node->left){
        node=node->left;
    } else {
      node = node->right;
    }
    }
}
void right(TreeNode<int>* root,vector<int>&v){
    vector<int>temp;
    TreeNode<int>* node=root->right;
    while (node != NULL) {
      if (!isleaf(node))
        temp.push_back(node->data);
      if (node->right)
        node = node->right;
      else
        node = node->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
         v.push_back(temp[i]);
    }
}
void leaves(TreeNode<int>* root,vector<int>&v){
    if(isleaf(root))v.push_back(root->data);
    if(root->left){
        leaves(root->left,v);

    }
    if(root->right){
        leaves(root->right,v);
    }
}
vector<int> traverseBoundary(TreeNode<int>* root){
    // Write your code here.
    vector<int>v;
    if(root==NULL)return v;
    if(!isleaf(root))v.push_back(root->data);
    left(root,v);
    leaves(root,v);
    right(root,v);
    return v;
}