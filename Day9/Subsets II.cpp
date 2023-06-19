#include <bits/stdc++.h> 
void helper(int i,vector<int> &arr,vector<int> &num,set<vector<int>> &ans){
    if(i==arr.size()){
        ans.insert(num);return ;
    }
    num.push_back(arr[i]);
    helper(i+1,arr,num,ans);
    num.pop_back();
    helper(i+1,arr,num,ans);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    
set<vector<int>> ans;
    vector<vector<int>> res;
    vector<int> num;
    helper(0,arr,num,ans);
    for(auto i:ans)res.push_back(i);
    return res;
}
