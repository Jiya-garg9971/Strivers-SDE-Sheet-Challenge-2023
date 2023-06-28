TreeNode<int> *helper(vector<int> &inorder, vector<int> &postorder,int st,
int end,int &idx){
    if(st>end)return NULL;
    if(idx<0)return NULL;
    int j=st;
    for(;j<=end;j++){
        if(inorder[j]==postorder[idx])break;
    }
    TreeNode<int>* node=new TreeNode<int>(postorder[idx]);
    idx--;
    
    node->right=helper(inorder,postorder,j+1,end,idx);
    node->left=helper(inorder,postorder,st,j-1,idx);
    return node;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
     int n=inOrder.size()-1;
    int idx=n;
    return helper(inOrder,postOrder,0,n,idx);
}
