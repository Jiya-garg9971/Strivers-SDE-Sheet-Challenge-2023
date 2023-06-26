vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    if(!root)return {};
     map<int,int> mp;
    vector<int> ans;
    queue<pair<TreeNode<int> *,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode<int> * node=q.front().first;
            int level=q.front().second;
            if(!mp.count(level))mp[level]=node->val;
            q.pop();
            if(node->left)q.push({node->left,level-1});
            if(node->right)q.push({node->right,level+1});
        }
    }
    for(auto i:mp)ans.push_back(i.second);
    return ans;
}
