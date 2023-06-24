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
int f(TreeNode<int> *root,int &dia){
    if(root==NULL)return 0;
    int left=f(root->left,dia);
    int right=f(root->right,dia);
    dia=max(dia,left+right);
    return 1+max(left,right);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int dia;
    f(root,dia);
    return dia;

}
