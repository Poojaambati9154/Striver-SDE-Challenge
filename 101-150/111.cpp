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
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    stack<TreeNode*>s;
    vector<int>v;
    TreeNode* node=root;
    while(true){
        if(node!=NULL){
            s.push(node);
            node=node->left;
        }
        else{
            if(s.empty())break;
            node=s.top();
            s.pop();
            v.push_back(node->data);
            node=node->right;
        }
    }
    return v;
}