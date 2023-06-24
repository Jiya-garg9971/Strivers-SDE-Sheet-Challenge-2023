#include <bits/stdc++.h> 
class Node{
    public:
    Node* left,*right;  //left -0 , right 1
    Node(){
        left=NULL;
        right=NULL;
    }
};
class Trie{
    public:

    Node* root;
    /** Initialize your data structure here. */
    Trie() {
        root=new Node();
    }

    void insert(int &num){
        // Write your code here.
        Node* temp=root;
        for(int j=31;j>=0;j--){
            if(num & 1<<j){
                if(!temp->right)temp->right=new Node();
                temp=temp->right;
            }
            else{
                if(!temp->left)temp->left=new Node();
                temp=temp->left;
            }
        }
        return ;
    }

    int search(int &num){
        // Write your code here.
         Node* temp=root;
         int ans=0;
        for(int j=31;j>=0;j--){
            if(num & 1<<j){ //1
                if(temp->left){
                    temp=temp->left;
                }
                else{
                    temp=temp->right;
                    ans|=1<<j;
                }
            }
            else{
               if(temp->right){
                    temp=temp->right;
                    ans|=1<<j;
                }
                else
                    temp=temp->left;
            }
        }
        return ans;
    }
};

int maximumXor(vector<int> A)
{
    // Write your code here. 
    Trie t;
    int n=A.size();
    int ans=0;
    t.insert(A[0]);
    for(int i=1;i<n;i++){
        int x=t.search(A[i]);
        t.insert(A[i]);
        ans=max(ans,x^A[i]);
    }  
    return ans;
}
