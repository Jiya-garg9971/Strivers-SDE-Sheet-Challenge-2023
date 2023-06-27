bool helper(BinaryTreeNode<int>* root1,BinaryTreeNode<int>* root2){
    if(root1==NULL and root2==NULL)return true;
     if(root1==NULL || root2==NULL)return false;
     if(root1->data!=root2->data)return false;
     bool check1=helper(root1->left,root2->right);
      bool check2=helper(root1->right,root2->left);
      return check1 and check2;


}

bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.    
    return helper(root,root);
    
}
