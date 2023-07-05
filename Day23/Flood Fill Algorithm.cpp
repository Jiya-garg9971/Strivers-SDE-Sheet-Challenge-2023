#include<queue>
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    if(image[x][y]==newColor)return image;
    int color=image[x][y];
    image[x][y]=newColor;
    queue<pair<int,int>> q;
    q.push({x,y});
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
         int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int newx=x+dx[k],newy=y+dy[k];
            if(newx<0 || newy<0 || newx>=image.size() || newy>=image[0].size() ||
            image[newx][newy]!=color)continue;
            
         image[newx][newy]=newColor;
            q.push({newx,newy});
        }
    }
    return image;
}
