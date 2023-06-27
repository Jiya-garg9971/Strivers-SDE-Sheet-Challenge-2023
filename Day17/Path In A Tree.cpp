bool helper(TreeNode<int> *root, int x,vector<int> &ans){
	if(root==NULL)return false;
	if(root->data==x){
		ans.push_back(x);
		return true;
	}
	if(root->left){
		if(helper(root->left,x,ans)){
			ans.push_back(root->data);
			return true;
		}
	}
	if(root->right){
		if(helper(root->right,x,ans)){
			ans.push_back(root->data);
			return true;
		}
	}
	return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    // Write your code here.
	vector<int> ans;
	helper(root,x,ans);
	reverse(ans.begin(),ans.end());
	return ans;
}
