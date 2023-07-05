int floydWarshall(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<vector<int>> dist(n+1,vector<int>(1+n,1e9));
    for(auto i:edges){
        dist[i[0]][i[1]]=i[2];
    }
    for(int i=1;i<=n;i++){
        dist[i][i]=0;
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][k]!=1e9 and dist[k][j]!=1e9){
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
    }
    return dist[src][dest];    
}
