#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    stack<TreeNode*>s;
    vector<int>v;
    s.push(root);
    if(root==NULL)return v;
    while(!s.empty()){
        root=s.top();
        
        s.pop();
      v.push_back(root->data);
        if(root->right){
            s.push(root->right);
        }
        if(root->left){
            s.push(root->left);
        }
    }
    return v;
}