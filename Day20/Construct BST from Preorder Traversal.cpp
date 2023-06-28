TreeNode<int>* helper(vector<int> &preOrder,int st,int end){
     if(st>end)return NULL;
     int j=st+1;
     for(;j<=end;j++){
         if(preOrder[j]>preOrder[st])break;
     }
     TreeNode<int> *node=new TreeNode<int> (preOrder[st]);
     node->left=helper(preOrder,st+1,j-1);
     node->right=helper(preOrder,j,end);
     return node;
 }
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int n=preOrder.size()-1;
    return helper(preOrder,0,n);

}
