
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    if(root==NULL)return root;
    if(root->data>P->data and root->data>Q->data){
        return LCAinaBST(root->left,P,Q);
    }
    if(root->data<P->data and root->data<Q->data){
        return LCAinaBST(root->right,P,Q);
    }
    else return root;
}
