#include <bits/stdc++.h> 
/*   
    template <typename T = int>
	class TreeNode
	{
		public:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

		TreeNode(T data)
		{
			this->data = data;
			left = NULL;
			right = NULL;
		}

		~TreeNode()
		{
			if (left != NULL)
			{
		  		delete left;
			}
			if (right != NULL)
			{
			 	delete right;
			}
		}
	};
*/
bool f(TreeNode<int> *root, int x,vector<int>&v){
	if(root==NULL)return false;
	v.push_back(root->data);
	if(root->data==x){
		return true;
	}
	if(f(root->left,x,v)||f(root->right,x,v)){
		return true;
	}
	else{
		v.pop_back();
		return false;
	}
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int>v;
	f(root,x,v);
	return v;
}
