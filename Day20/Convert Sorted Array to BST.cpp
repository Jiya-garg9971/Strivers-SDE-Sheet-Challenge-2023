TreeNode<int> *helper(vector<int> &arr, int st,int end){
    if(st>end)return NULL;
    int j=st+(end-st)/2;
    TreeNode<int>* node=new TreeNode<int>(arr[j]);
    node->right=helper(arr,j+1,end);
    node->left=helper(arr,st,j-1);
    return node;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n){
    // Write your code here.
    TreeNode<int>* a= helper(arr,0,n-1);
    return a;
}
