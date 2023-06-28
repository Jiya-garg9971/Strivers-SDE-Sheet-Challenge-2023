TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Preorder -- root, left, right
    TreeNode<int>* ans=new TreeNode<int>(0);
    stack<TreeNode<int> *> st;
    if(root==NULL)return root;
    st.push(root);
    TreeNode<int> *prev=ans;
    while(!st.empty()){
         TreeNode<int>*node=st.top();
         prev->right=node;
         prev=prev->right;
         st.pop();
         if(node->right)st.push(node->right);
         if(node->left)st.push(node->left);
         node->left=NULL;
    }
    return ans->right;    
}
