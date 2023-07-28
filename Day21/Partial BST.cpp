#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

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
    };

*************************************************************/
bool helper(BinaryTreeNode<int> * root,int mn,int mx){
    if(root==NULL)return true;
    if(root->data>mx || root->data<mn)return false;
    bool ans=true;
    if(root->left) ans&= helper(root->left,mn,root->data);
    if(root->right)ans&=helper(root->right,root->data,mx);
    return ans;
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    return helper(root,INT_MIN,INT_MAX);
}
