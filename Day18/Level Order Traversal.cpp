vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    if(root==NULL)return {};
    vector<int> ans;
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            BinaryTreeNode<int>* node=q.front();
            q.pop();
            ans.push_back(node->val);
            if(node->left)q.push(node->left);
             if(node->right)q.push(node->right);
        }
    }
    return ans;
}
