TreeNode<int> *helper(vector<int> &inorder, vector<int> &preorder,int st,
int end,int &idx){
    if(st>end)return NULL;
    if(idx==preorder.size())return NULL;
    int j=st;
    for(;j<=end;j++){
        if(inorder[j]==preorder[idx])break;
    }
    TreeNode<int>* node=new TreeNode<int>(preorder[idx]);
    idx++;
    node->left=helper(inorder,preorder,st,j-1,idx);
    node->right=helper(inorder,preorder,j+1,end,idx);
    return node;
}

TreeNode<int> *buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	//    INORDER--- Left Root Right
    //     PREORDER---- Root Left Right
    int n=inorder.size()-1;
    int idx=0;
    return helper(inorder,preorder,0,n,idx);

}
