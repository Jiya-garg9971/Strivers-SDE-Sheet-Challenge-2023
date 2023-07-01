// TWO STEPS:-
// 1. do inorder traversal
// 2. apply binary search

void inorder(BinaryTreeNode<int> *root,vector<int> &v){
    if(root==NULL)return ;
    inorder(root->left,v);
    v.push_back(root->data);     
    inorder(root->right,v);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
    vector<int> v;
    inorder(root,v);
    int lo=0,hi=v.size()-1;
    while(lo<hi){
        if(v[lo]+v[hi]==k)return true;
        else if(v[lo]+v[hi]<k)lo++;
        else hi--;
    }
    return false;
}
