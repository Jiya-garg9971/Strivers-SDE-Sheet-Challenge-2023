bool helper(vector<vector<int>> &mat,int i,int m,vector<int> &rec){
    if(i==mat.size())return true;
    for(int k=1;k<=m;k++){
        bool possible=true;
        for(int j=0;j<mat.size();j++){
            if(i!=j and mat[i][j] and rec[j]==k){
                possible=false;break;
            }
        }
        if(possible){
            rec[i]=k;
            if(helper(mat,i+1,m,rec))return true;
            rec[i]=0;
            
        }
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m) {
    // Write your code here
    int n=mat.size();
    vector<int> rec(n,0);
    bool ans=helper(mat,0,m,rec);
    return ans?"YES":"NO";

}
