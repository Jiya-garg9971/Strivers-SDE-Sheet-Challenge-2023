#define pp pair<int,pair<int,int>> 
//number,x,y
#include <bits/stdc++.h> 
int getMedian(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
   // if(n<2 || m<2)return 0;
    priority_queue<pp,vector<pp>,greater<pp>> pq;
    for(int i=0;i<matrix.size();i++){
        pq.push({matrix[i][0],{i,0}});
    }
    int total=n*m;
    bool extra=false;
    if(total%2==0)extra=true;
    int cnt=0;
    int sum=0;
    while(cnt<=total/2 and !pq.empty()){
        int num=pq.top().first;
        int x=pq.top().second.first;
        int y=pq.top().second.second;
        sum=pq.top().first;
        pq.pop();cnt++;
        if(y+1<m)pq.push({matrix[x][y+1],{x,y+1}});
    }
    if(extra){
        sum+=pq.top().first;
        sum/=2;
    }
    return sum;


    // Write your code here.
}
