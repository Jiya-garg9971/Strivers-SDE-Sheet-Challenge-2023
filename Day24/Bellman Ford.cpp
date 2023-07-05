#include <bits/stdc++.h> 
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
     vector<int> dist(n+1,1e9);
     dist[src]=0;
    for(int i=0;i<n-1;i++){
        for(auto j:edges){
            int st=j[0],end=j[1],cost=j[2];
            if(dist[st]!=1e9 and dist[st]+cost<dist[end])dist[end]=dist[st]+cost;
        }
    }
    return dist[dest];
}
