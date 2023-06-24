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
void f(TreeNode<int> *root,int lvl,vector<int>&ds){
    if(root==NULL)return;
    if(ds.size()==lvl){
        ds.push_back(root->data);

    }
    f(root->left,lvl+1,ds);
    f(root->right,lvl+1,ds);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    vector<int>ds;
    f(root,0,ds);
    return ds;
}