#include <bits/stdc++.h> 

void helper(vector<int>&num,int i,int sum,vector<int> &ans){
    if(i==num.size()){ans.push_back(sum);return;}
    sum+=num[i];
    helper(num,i+1,sum,ans);
    sum-=num[i];
    helper(num,i+1,sum,ans);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ans;
    helper(num,0,0,ans);
    sort(ans.begin(),ans.end());
    return ans;
}
