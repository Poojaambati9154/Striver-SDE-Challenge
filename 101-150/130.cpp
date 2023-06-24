#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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
TreeNode<int> * f(vector<int> &inorder,int ins,int ine, vector<int> &preorder,int pres
,int pree,map<int,int>&m){
    if(pres>pree || ins>ine)return NULL;
    TreeNode<int> *root=new TreeNode<int>(preorder[pres]);
    int inroot=m[preorder[pres]];
    int numsleft=inroot-ins;
    root->left=f(inorder,ins,inroot-1,preorder,pres+1,pres+numsleft,m);
    root->right=f(inorder,inroot+1,ine,preorder,pres+numsleft+1,pree,m);
    return root;
}
TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    Write your code here
    map<int,int>m;
    for(int i=0;i<inorder.size();i++){
        m[inorder[i]]=i;
    }
    TreeNode<int> *root=f(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,m);
    return root;
}