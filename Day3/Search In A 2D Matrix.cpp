bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n=mat.size();
    int m=mat[0].size();
    int st=0,end=n*m-1;
    //binary search
    while(st<=end){
        int mid=(st+end)/2;
        int x=mid/m;
        int y=mid%m;
        if(mat[x][y]==target)return true;
        else if(mat[x][y]<target) st=mid+1;
        else end=mid-1;
    }
    return false;

}
