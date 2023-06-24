#include<bits/stdc++.h>/************************************************************


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

string serializeTree(TreeNode<int> *root)
{
 //    Write your code here for serializing the tree
 if(root==NULL)return "";
 string stri="";
 queue<TreeNode<int> *>q;
 q.push(root);
 while(!q.empty()){
     TreeNode<int> *node=q.front();
     q.pop();
     if(node==NULL){
         stri.append("#,");
     }
     else{
         stri.append(to_string(node->data)+',');
     }
     if(node!=NULL){
         q.push(node->left);
         q.push(node->right);
     }
 }
 return stri;

}

TreeNode<int>* deserializeTree(string &stri)
{
 //    Write your code here for deserializing the tree
 if (stri.length()==0)return NULL;
 stringstream s(stri);
 string str;
 getline(s,str,',');
 TreeNode<int>* root=new TreeNode<int>(stoi(str));
 queue<TreeNode<int>* >q;
 q.push(root);
 while(!q.empty()){
     TreeNode<int>* node=q.front();
     q.pop();
     getline(s,str,',');
     if(str=="#"){
         node->left=(NULL);
     }
     else{
         node->left=new TreeNode<int>(stoi(str));
         q.push(node->left);
     }
     getline(s,str,',');
     if(str=="#"){
         node->right=NULL;
     }
     else{
         node->right=new TreeNode<int>(stoi(str));
         q.push(node->right);
     }
 }
 return root;


}



