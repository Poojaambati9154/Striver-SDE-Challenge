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

class BSTiterator
{
    public:
    stack<TreeNode<int> *>s;
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        push(root);
    }
    void push(TreeNode<int> *root){
        while(root!=NULL){
            s.push(root);
            root=root->left;
        }
    }

    int next()
    {
        // write your code here
        TreeNode<int> *node=s.top();
        s.pop();
        push(node->right);
        return node->data;
    }

    bool hasNext()
    {
        // write your code here
        return !s.empty();
    }
};


/*
    Your BSTIterator object will be instantiated and called as such:
    BSTIterator iterator(root);
    while(iterator.hasNext())
    {
       print(iterator.next());
    }
*/