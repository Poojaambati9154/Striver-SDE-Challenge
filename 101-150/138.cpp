#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
TreeNode<int>* f(vector<int> &arr,int l,int h){
    if(l>h)return NULL;
    int m=(l+h)/2;
    TreeNode<int>*root=new TreeNode<int>(arr[m]);
    root->left=f(arr,l,m-1);
    root->right=f(arr,m+1,h);
    return root;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    return f(arr,0,n-1);
}