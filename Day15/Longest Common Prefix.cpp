string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string a="";
    for(int j=0;j<arr[0].length();j++){
        for(int i=1;i<n;i++){
            if(arr[i][j]!=arr[0][j])return a;
        }
        a+=arr[0][j];
    }
    return a;
}


