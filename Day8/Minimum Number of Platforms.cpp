int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    //910 1120 1130 1200 1900 2000
    sort(at,at+n);
    sort(dt,dt+n);
    int i=0,j=0;
    int platform=0;
    int result=0;
    while(i<n and j<n){
        if(at[i]<=dt[j]){
            platform++;
            i++;
        }
        else{
            platform--;j++;
        }
        result=max(result,platform);
    }
    return result;
}
