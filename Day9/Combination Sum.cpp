#include<set>
#include<bits/stdc++.h>
void helper(int i,vector<int> &arr,vector<int> &num, int k,vector<vector<int>> &ans){
	if(k==0){
		ans.push_back(num);
		return ;
	}
	for (int j= i; j< arr.size(); j++) {
		if (j> i && arr[j] == arr[j- 1]) continue;
		if (arr[j] >k) break;
		num.push_back(arr[j]);
		helper(j+ 1,arr,num,k - arr[j], ans);
		num.pop_back();
 	}
}


vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
	vector<vector<int>> ans;
	vector<int> num;
	sort(arr.begin(),arr.end());
	int sum=0;
	helper(0,arr,num,target,ans);
	return ans;	
}
