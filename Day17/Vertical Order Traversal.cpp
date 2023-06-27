
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.

    map<int,vector<int>> mp;
    queue<pair<TreeNode<int>*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode<int>* node=q.front().first;
            int x=q.front().second;
            q.pop();
            mp[x].push_back(node->data);
            if(node->left)q.push({node->left,x-1});
             if(node->right)q.push({node->right,x+1});
        }
    }
    vector<int> ans;
    for(auto i:mp){
        for(auto j:i.second)ans.push_back(j);
    }
    return ans;
}
