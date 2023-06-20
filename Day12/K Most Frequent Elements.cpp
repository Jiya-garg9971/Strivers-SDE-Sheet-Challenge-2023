#include <bits/stdc++.h> 
#define pp pair<int,int>
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    map<int,int> mp;
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    for(auto i:arr)mp[i]++;
    for(auto i:mp){
        if(pq.size()>=k){
            if(i.second>pq.top().first){pq.pop();
            pq.push({i.second,i.first});}
        }
        else pq.push({i.second,i.first});
    }
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top().second);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
    // Write your code here.
}
