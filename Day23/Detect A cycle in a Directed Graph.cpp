#include<vector>
bool detectCycle(int i,vector<int> adj[],vector<int> &stack,vector<int> &visited){
  stack[i]=true;
  visited[i]=true;
  for(int j:adj[i]){
    if(stack[j])return true;
    else if(visited[j]){
      bool find_cycle=detectCycle(j,adj,stack,visited);
      if(find_cycle)return true;
    }
  }
  stack[i]=false;
  return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
  vector<int> adj[n];
  for(auto i:edges){
    adj[i.first-1].push_back(i.second-1);
  }
  vector<int> stack(n+1,0),visited(n+1,0);
  for(int i=0;i<n;i++){
    if(!visited[i]){
      if(detectCycle(i,adj,stack,visited))return true;
    }
  }
  return false;
}
