void PostOrder(TreeNode* root,vector<int> &ans){
    if(root==NULL)return ;
    //l r n
    PostOrder(root->left,ans);
    PostOrder(root->right,ans);
    
    ans.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    PostOrder(root,ans);
    return ans;
}
