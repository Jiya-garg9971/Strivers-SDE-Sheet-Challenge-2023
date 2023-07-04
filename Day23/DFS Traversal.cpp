
void dfs(int i,vector<int> adj[],vector<int> &v,vector<int> &visited){
    visited[i]=1;
    v.push_back(i);
    for(auto j:adj[i]){
        if(!visited[j])dfs(j,adj,v,visited);
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    vector<int> adj[V];
    for(auto i:edges){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    vector<int> visited(V,0);
    // Write your code here
    vector<vector<int>> ans;
    for(int i=0;i<V;i++){
        if(!visited[i]){
            vector<int> v;
            dfs(i,adj,v,visited);
            ans.push_back(v);
        }
    }
    return ans;
}
