#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

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

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>v;
    if(root==NULL){
        return v;
    }
    map<int,int>m;
    queue<pair<TreeNode<int>*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto i=q.front();
        q.pop();
        TreeNode<int>*node=i.first;
        int l=i.second;
        if(m.find(l)==m.end()){
            m[l]=node->val;
        }
        if(node->left!=NULL){
            q.push({node->left,l-1});
        }
        if(node->right!=NULL){
            q.push({node->right,l+1});
        }
    }
    for(auto it:m){
        v.push_back(it.second);
    }
    return v;
}