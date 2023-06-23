#include<queue>
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    // Write your code here. 
    int time=-1;
    int fresh=0;
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2)q.push({i,j});
            if(grid[i][j]==1)fresh++;
        }
    }
    if(fresh==0)return 0;
    while(!q.empty()){
        int t=q.size();
        int dx[]={-1,0,0,1};
        int dy[]={0,1,-1,0};
        for(int c=0;c<t;c++){
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int newx=x+dx[i],newy=y+dy[i];
                if(newx<0 || newy<0 || newx>=n || newy>=m || grid[newx][newy]==0 || grid[newx][newy]==2)continue;
                grid[newx][newy]=2;
                fresh--;
                q.push({newx,newy});
            }
        }
        time++;
    }
    return fresh==0?time:-1;
}
