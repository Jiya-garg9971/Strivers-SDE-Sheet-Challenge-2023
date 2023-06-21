vector<vector<int>> ans;
bool canplace(int x,int y,vector<vector<int>> &board){
    for(int k=0;k<board.size();k++){
        if(board[x][k] || board[k][y])return false;
    }
    //now check diagonals
    //upper diagonal
    int m=y-1,n=y+1;
    for(int k=x-1;k>=0;k--){
        if(m>=0 and board[k][m]){return false;}
        if(n<board.size() and board[k][n]){return false;}
        m--;n++;
    }
    //lower diagonal
    m=y-1,n=y+1;
    for(int k=x+1;k<board.size();k++){
        if(m>=0 and board[k][m]){return false;}
        if(n<board.size() and board[k][n]){return false;}
        m--;n++;
    }
    return true;
}
void nqueen(int i,vector<vector<int>>& board){
    if(i==board.size()){
        vector<int> a;
        for(auto i:board){
            for(auto j:i)a.push_back(j);
        }
        ans.push_back(a);
        return ;
    }
    for(int j=0;j<board.size();j++){
        if(canplace(i,j,board)){
            board[i][j]=1;
            nqueen(i+1,board);
            board[i][j]=0;
        }
    }
}
vector<vector<int>> solveNQueens(int n) {
    // Write your code here.
    vector<vector<int>> board(n,vector<int>(n,0));
    nqueen(0,board);
    return ans;
}
