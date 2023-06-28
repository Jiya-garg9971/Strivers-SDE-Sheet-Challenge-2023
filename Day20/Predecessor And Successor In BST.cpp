void inorder(BinaryTreeNode<int>* root,vector<int> &v){
    if(root==NULL)return;
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    vector<int> v;
    inorder(root,v);
    pair<int,int> ans={-1,-1};
    int n=v.size();
    for(int i=0;i<n;i++){
        if(v[i]==key){
            if(i>0)ans.first=v[i-1];
            if(i<n-1)ans.second=v[i+1];
        }
    }
    return ans;
}
