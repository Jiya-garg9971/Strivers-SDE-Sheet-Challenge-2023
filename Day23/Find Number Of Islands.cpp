void dfs(int i,int j,int** arr,int n,int m){
     arr[i][j]=0;
     int dx[]={-1,-1,-1,0,0,1,1,1};
     int dy[]={-1,0,1,-1,1,1,-1,0};
     for(int k=0;k<8;k++){
        int newx=i+dx[k];
        int newy=j+dy[k];
        if(newx<0 || newy<0 || newx>=n || newy>=m || arr[newx][newy]==0)continue;
        dfs(newx,newy,arr,n,m);
    }
}


int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
    int ans=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
        if(arr[i][j]){
            dfs(i,j,arr,n,m);
           ans++;
        }
    }
    return ans;

}
