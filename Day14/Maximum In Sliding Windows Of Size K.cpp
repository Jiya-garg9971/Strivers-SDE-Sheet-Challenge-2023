#include <bits/stdc++.h> 
#include<queue>
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //using deque
    int n=nums.size();
    deque<int> dq;
    
    for(int i=0;i<min(n,k);i++){
        while(!dq.empty() and nums[dq.back()]<=nums[i])dq.pop_back();
        dq.push_back(i);
    }
    vector<int> ans;
    for(int i=k;i<n;i++){
        ans.push_back(nums[dq.front()]);
        while(!dq.empty() and dq.front()<=i-k)dq.pop_front();
        while(!dq.empty() and nums[dq.back()]<=nums[i])dq.pop_back();
        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);
    return ans;
}
