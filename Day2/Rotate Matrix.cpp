#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    if(n<2 ||m<2)return;
    int sr=0,sc=0,er=n-1,ec=m-1;
    for(int po=0;po<min(n/2,m/2);po++){    
        int swap=mat[sr][sc];
        int  i=sr,j=sc;   
        for(int k=sc;k<=ec;k++){
            int t=mat[sr][k];
            mat[sr][k]=swap;
            swap=t;
        }
        sr++;
        for(int k=sr;k<=er;k++){
            int t=mat[k][ec];
            mat[k][ec]=swap;
            swap=t;
        }
        ec--;
        if(sr<=er){
            for(int k=ec;k>=sc;k--){
                int t=mat[er][k];
                mat[er][k]=swap;
                swap=t;
            }
            er--;
        }
        if(sc<=ec){
            for(int k=er;k>=sr;k--){
                int t=mat[k][sc];
                mat[k][sc]=swap;
                swap=t;
            }
            sc++;
        }
        mat[i][j]=swap;
       
    }
    return ;


}
