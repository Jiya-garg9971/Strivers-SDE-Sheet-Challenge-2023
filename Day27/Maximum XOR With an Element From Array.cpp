#include <bits/stdc++.h> 
#include<vector>
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

    int search(int num){
         Node* temp=root;
         int ans=0;
		 if(!temp->left and !temp->right)return -1;
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

vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
	//	Write your coode here.
	int m=queries.size();
	vector<vector<int>> v;
	vector<int> ans(m,-1);
	for(int i=0;i<m;i++){
		v.push_back({queries[i][1],queries[i][0],i});
	}
	sort(arr.begin(),arr.end());
	sort(v.begin(),v.end());
	Trie t;
	int n=arr.size();
	int i=0;
	for(int j=0;j<queries.size();j++){
		int num=v[j][0];
		while(i<n and arr[i]<=num){
			t.insert(arr[i]);i++;
		}
		int x=t.search(v[j][1]);
		if(x!=-1)
		ans[v[j][2]]=x^v[j][1];
	}
	return ans;
}
