/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
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
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool f(BinaryTreeNode<int>* a,BinaryTreeNode<int>* b){
    if(a==NULL || b==NULL)return a==b;
    if(a->data!=b->data)return false;
    return f(a->left,b->right)&&f(a->right,b->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    if(root==NULL)return true;
    return f(root->left,root->right);
}