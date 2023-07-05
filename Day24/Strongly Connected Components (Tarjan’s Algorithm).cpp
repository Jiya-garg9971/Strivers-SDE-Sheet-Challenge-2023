#include<stack>
void dfs(int i,stack<int>& st,vector<int> adj[],vector<int> &visit){
    visit[i]=1;
    for(auto j:adj[i]){
        if(!visit[j])dfs(j,st,adj,visit);
    }
    st.push(i);
}
void reversedfs(int i,vector<int> &ans,vector<int> adj[],vector<int> &visit){
    ans.push_back(i);
    visit[i]=1;
    for(auto j:adj[i]){
        if(!visit[j])reversedfs(j,ans,adj,visit);
    }
}
vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges)
{
    // three steps:-
    // 1. do the dfs and store it in the stack
    // 2. Reverse the direction of the edges
    // 3. Do reverse dfs for finding strongly connected components while popping elements from the stack.

    //adjacency list
    vector<int> adj[n];
    vector<int> visited(n,0);
    stack<int> st;
    for(auto i:edges)adj[i[0]].push_back(i[1]);
    for(int i=0;i<n;i++){
        if(!visited[i])dfs(i,st,adj,visited);
    }
    // reverse edges
    vector<int> adj2[n];
    vector<int> visit2(n,0);
    for(auto i:edges)adj2[i[1]].push_back(i[0]);
    vector<vector<int>> res;
    while(!st.empty()){
        if(!visit2[st.top()]){
            vector<int> v;
            reversedfs(st.top(),v,adj2,visit2);
            res.push_back(v);
        }
        st.pop();
    }
    return res;
}
