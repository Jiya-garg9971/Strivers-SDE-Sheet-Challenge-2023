#include <bits/stdc++.h>
void bfshelper(int i,map<int,vector<int>> &adj,vector<int>&visited,
    vector<int> &ans){
    visited[i]=1;
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int a=q.front();q.pop();
        ans.push_back(a);
        for(auto j:adj[a]){
            if(!visited[j]){
                visited[j]=1;
                q.push(j);
            }
        }
    }
    return ;
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges){
    map<int,vector<int>> adj;
    for(auto i:edges){
        adj[i.first].push_back(i.second);
        adj[i.second].push_back(i.first);
    }
    for(auto i:adj){
        sort(i.second.begin(),i.second.end());
        adj[i.first]=i.second;
    }
    vector<int> visited(vertex,0);
    vector<int> ans;
    for(int i=0;i<vertex;i++){
        if(!visited[i])bfshelper(i,adj,visited,ans);
    }
    return ans;

}
