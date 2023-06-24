#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
void inorder(BinaryTreeNode<int>* root,vector<BinaryTreeNode<int>*>&v){
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root);
    inorder(root->right,v);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<BinaryTreeNode<int>*>v;
    inorder(root,v);
    int pre=-1,suc=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]->data<key){
            pre=v[i]->data;
            break;
        }

    }
    for(int i=0;i<v.size();i++){
        if(v[i]->data>key){
            suc=v[i]->data;
            break;
        }
    }
    return {pre,suc};
}
