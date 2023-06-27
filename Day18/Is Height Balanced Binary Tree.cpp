
int helper(BinaryTreeNode<int>* root,bool &ans){
    if(root==NULL)return 0;
    int lh=1+helper(root->left,ans);
    int rh=1+helper(root->right,ans);
    if(abs(lh-rh)>1)ans=false;
    return max(lh,rh);
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    bool ans=true;
    helper(root,ans);
    return ans;

}
