#include <bits/stdc++.h> 
#define pp pair<int,int>
vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
    priority_queue<pp,vector<pp>,greater<pp>> pq;
   vector<pp> adj[vertices];
    for(auto i:vec){
        adj[i[0]].push_back({i[1],i[2]});
        adj[i[1]].push_back({i[0],i[2]});
    }
    vector<int> dist(vertices,INT_MAX);
    pq.push({0,source});
    dist[source]=0;
    while(!pq.empty()){
        int a=pq.top().first;
        pq.pop();
        for(auto i:adj[a]){
           if(dist[a]+i.second<dist[i.first]){
              dist[i.first]=dist[a]+i.second;
              pq.push({i.first,dist[i.first]});
           }
        }
    }
    return dist;    
}
