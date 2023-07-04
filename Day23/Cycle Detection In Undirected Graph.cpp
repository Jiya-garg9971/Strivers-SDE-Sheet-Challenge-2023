#include<queue>
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.
    vector<int> visited(n+1,0);
    vector<int> adj[n+1];
    for(auto i:edges){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    queue<int> q;
    vector<int> parent(n+1,-1);
    for(int k=0;k<=n;k++){
         q.push(k);
         while(!q.empty()){
            int a=q.front();
            q.pop();
            if(visited[a])continue;
            visited[a]=1;
            for(auto i:adj[a]){
                if(i!=parent[a] and visited[i])return "Yes";
                else if(!visited[i]){parent[i]=a;q.push(i);}
            }
        }
    }
    
    return "No";

}
