vector<vector<int>> ans;
void helper(int i,vector<int> &arr,vector<int> &num, int sum, int k){
    if(i==arr.size()){
        if(sum==k && num.size()!=0)
        ans.push_back(num);
        return ;
    }
    num.push_back(arr[i]);
    helper(i+1,arr,num,sum+arr[i],k);
    num.pop_back();
    helper(i+1,arr,num,sum,k);
}

vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<int> num;
    helper(0,arr,num,0,k);
    return ans;
}
