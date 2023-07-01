void helper(TreeNode<int> *&root,int k,priority_queue<int> &pq){
    if(pq.size()>=k){
        if(pq.top()>root->data){
            pq.pop();
            pq.push(root->data);
        }
    }
    else pq.push(root->data);
    if(root->left) helper(root->left,k,pq);
    if(root->right) helper(root->right,k,pq);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    priority_queue<int> pq;  // Max_heap
   helper(root,k,pq);
   return pq.top();
}
