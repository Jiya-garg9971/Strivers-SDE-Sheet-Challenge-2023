#include <bits/stdc++.h> 
set<vector<int>> st;
void helper(int i,vector<int> &v,vector<int> &ans){
    if(i==v.size()){st.insert(ans);return;}
    ans.push_back(v[i]);
    helper(i+1,v,ans);
    ans.pop_back();
     helper(i+1,v,ans);

}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<int> ans;
    helper(0,v,ans);
    vector<vector<int>> res;
    for(auto i:st){
        res.push_back(i);
    }
    return res;

}
