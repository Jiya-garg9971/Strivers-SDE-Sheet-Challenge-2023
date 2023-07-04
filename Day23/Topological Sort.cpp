#include <bits/stdc++.h> 
vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<int> indegree(v,0);
    vector<int> adj[v];
    for(auto i:edges){
        indegree[i[1]]++;
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0)q.push(i);
    }
    vector<int> ans;
    while(!q.empty()){
        int a=q.front();
        ans.push_back(a);
        q.pop();
        for(auto j:adj[a]){
            indegree[j]--;
            if(indegree[j]==0)q.push(j);
        }
    }
    return ans;

}
