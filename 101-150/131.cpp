#include<bits/stdc++.h>
/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
TreeNode<int> *f(vector<int>& postOrder,int poss,int pose, vector<int>& inOrder,
int ins,int inte, map<int,int>&m){
     if(ins>inte || poss>pose)return NULL;
     TreeNode<int>*root=new TreeNode<int>(postOrder[pose]);
     int inroot=m[postOrder[pose]];
     int nums=inroot-ins;
     root->left=f(postOrder,poss,poss+nums-1,inOrder,ins,inroot-1,m);
     root->right=f(postOrder,poss+nums,pose-1,inOrder,inroot+1,inte,m);
     return root;
}
TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     map<int,int>m;
     for(int i=0;i<inOrder.size();i++){
          m[inOrder[i]]=i;

     }
     TreeNode<int>*root=f(postOrder,0,postOrder.size()-1,inOrder,0,inOrder.size()-1,m);
     return root;
}
