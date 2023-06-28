void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(root==NULL)return ;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        BinaryTreeNode<int> * prev=q.front();
        q.pop();
        if(prev->left)q.push(prev->left);
        if(prev->right)q.push(prev->right);
        for(int i=1;i<n;i++){
            BinaryTreeNode<int> * curr=q.front();
            q.pop();
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            prev->next=curr;
            prev=prev->next;

        }
    }
    return ;
    
}
