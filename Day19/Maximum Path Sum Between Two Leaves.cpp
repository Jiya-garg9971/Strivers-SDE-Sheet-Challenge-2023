#include <bits/stdc++.h> 
long long helper(TreeNode<int> * root,long long &ans,int &cnt){
        if(root==NULL)return -1;
    if(root->left==NULL and root->right==NULL)return root->val;
    
    long long leftHelper=helper(root->left,ans,cnt);
    cnt++;
    long long rightHelper=helper(root->right,ans,cnt);
  if(leftHelper!=-1 and rightHelper!=-1)  ans=max(ans,leftHelper+rightHelper+root->val);
    return root->val+max(leftHelper,rightHelper);

}
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    int cnt=0;
    long long ans=-1;
    helper(root,ans,cnt);
    return ans;
}
