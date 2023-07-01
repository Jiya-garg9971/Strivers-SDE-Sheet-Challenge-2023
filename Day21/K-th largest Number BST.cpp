void helper(TreeNode<int>* root, int k,priority_queue<int,vector<int>,greater<int>> &pq){
    if(pq.size()>=k){
        if(pq.top()<root->data){
            pq.pop();
            pq.push(root->data);
        }
    }
    else pq.push(root->data);
    if(root->left)helper(root->left,k,pq);
    if(root->right)helper(root->right,k,pq);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.
    priority_queue<int,vector<int>,greater<int>> pq;
    helper(root,k,pq);
    if(pq.size()<k)return -1;
    return pq.top();

}
