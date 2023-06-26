void PreOrder(TreeNode* root,vector<int> &ans){
    if(root==NULL)return ;
    //n l r
    
    ans.push_back(root->data);
    PreOrder(root->left,ans);
    PreOrder(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    PreOrder(root,ans);
    return ans;
}
