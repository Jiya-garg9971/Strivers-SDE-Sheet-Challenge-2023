#define pp pair<int,int>
#include<queue>
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
	queue<int> q;
	int n=edges.size();
	vector<int> adj[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(edges[i][j]){adj[i].push_back(j);adj[j].push_back(i);}
		}
	}
	vector<int> color(n,0);
	for(int i=0;i<n;i++){
		if(color[i])continue;
		q.push(i);
		color[i]=1;
		while(!q.empty()){
			int a=q.front();
			q.pop();
			for(auto j:adj[a]){
				if(color[j] and color[j]==color[a])return false;
				if(color[j])continue;
				color[j]=3-color[a];
				q.push(j);
			}
		}
	}
	return true;
}
