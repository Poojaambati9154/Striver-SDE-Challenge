#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
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
class node{
 public:
 int mini,maxi,maxsize;
 node(int mi,int ma,int size){
     mini=mi;
     maxi=ma;
     maxsize=size;
 }

};

node f(TreeNode<int>* root){
    if(!root)return node(INT_MAX,INT_MIN,0);
   
    auto left=f(root->left);
    auto right=f(root->right);
    if(left.maxi<root->data && root->data<right.mini){
        return node(min(left.mini,root->data),max(right.maxi,root->data),
        left.maxsize+right.maxsize+1);
        
    }
    
    return node(INT_MIN,INT_MAX,max(left.maxsize,right.maxsize));
}
int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
   
    return f(root).maxsize;
}
