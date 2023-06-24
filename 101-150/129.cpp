#include <bits/stdc++.h> 
/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
long long int f(TreeNode<int> *root,long long int &maxi){
    if(root==NULL)return 0;
    long long int l=f(root->left,maxi);
    long long int r=f(root->right,maxi);
    maxi=max(maxi,l+r+root->val);
    return root->val+max(l,r);
}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    long long int maxi=INT_MIN;
    if(root==NULL || root->left==NULL || root->right==NULL)return -1;
    f(root,maxi);
    return maxi;
}