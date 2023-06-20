#include <bits/stdc++.h> 
#define pp pair<int,pair<int,int>>
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    for(int i=0;i<k;i++)pq.push({kArrays[i][0],{i,0}});
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top().first);
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        pq.pop();
        if(y+1<kArrays[x].size())pq.push({kArrays[x][y+1],{x,y+1}});
    }
    return ans;
    // Write your code here. 
}
