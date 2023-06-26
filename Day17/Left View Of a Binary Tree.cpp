void helper(int level, TreeNode<int>* root,map<int,int> &mp){
    if(root==NULL)return;
    if(!mp.count(level))mp[level]=root->data;
    helper(level+1,root->left,mp);
    helper(level+1,root->right,mp);
}
vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
    map<int,int> mp;
    helper(0,root,mp);
    vector<int> ans;
    for(auto i:mp)ans.push_back(i.second);
    return ans;
}
