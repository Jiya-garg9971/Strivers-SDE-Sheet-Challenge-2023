
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    if(!root)return {};
    deque<BinaryTreeNode<int> *> q;
    q.push_back(root);
    vector<int> ans;
    int cnt=0;
    while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
            BinaryTreeNode<int> *node;
            if(cnt%2){
                node=q.front();
                ans.push_back(node->data);
                q.pop_front();
                if(node->right)q.push_back(node->right);
                if(node->left)q.push_back(node->left);
            
            }
            else{
                node=q.back();
                q.pop_back();
                ans.push_back(node->data);
                if(node->left)q.push_front(node->left);
                if(node->right)q.push_front(node->right);
            }
        }
        cnt++;
    }
    return ans;

}
