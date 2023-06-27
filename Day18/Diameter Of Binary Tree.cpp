int height(TreeNode<int>* root){
    if(root==NULL)return 0;
    int cnt=0;
    int lh=1+height(root->left);
    int rh=1+height(root->right);
    return max(lh,rh);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    if(root==NULL)return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    int op1=lh+rh;
    int op2=diameterOfBinaryTree(root->left);
    int op3=diameterOfBinaryTree(root->right);
    return max(op1,max(op2,op3));
}
