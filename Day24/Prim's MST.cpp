#include <bits/stdc++.h> 
#define pp pair<pair<int, int>, int>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{

    // Write your code here.
    vector<pair<int,int>> adj[n+1];
    for(auto i:g){
         int a=i.first.first;
        int b=i.first.second;
        int c=i.second;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }
    vector<pair<pair<int, int>, int>> ans;
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    pq.push({{0,-1},1});
    vector<int> visited(n+1,0);
    while(!pq.empty()){
        int c=pq.top().first.first;
        int a=pq.top().first.second;
        int b=pq.top().second;
        pq.pop();
        if(visited[b])continue;
        visited[b]=1;
        if(a!=-1)ans.push_back({{a,b},c});
        for(auto i:adj[b]){
            // cout<<i.first<<" ";
            if(!visited[i.first]){
                pq.push({{i.second,b},i.first});
            }
        }
    }
    return ans;
}
