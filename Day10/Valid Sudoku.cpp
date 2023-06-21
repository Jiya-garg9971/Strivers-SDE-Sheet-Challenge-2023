bool canPlace(int x,int y,int val,int matrix[9][9]){
    for(int i=0;i<9;i++){
        if(matrix[x][i]==val || matrix[i][y]==val )return false;
        if(matrix[3*(x/3)+i/3][3*(y/3)+i%3]== val)return false;        
    }
    return true;
}
bool helper(int matrix[9][9]){
    for(int row=0;row<9;row++){
        for(int col=0;col<9;col++){
            if(matrix[row][col]==0){
                for(int val=1;val<=9;val++){
                    if(canPlace(row,col,val,matrix)){
                        matrix[row][col]=val;
                        bool agepossible=helper(matrix);
                        if(agepossible)return true;
                        else   matrix[row][col]=0;                   
                        
                    }
                }
                return false;
            }
        }
    }
    return true;
}
bool isItSudoku(int matrix[9][9]) {

    // Write your code here.
    return helper(matrix);

}
