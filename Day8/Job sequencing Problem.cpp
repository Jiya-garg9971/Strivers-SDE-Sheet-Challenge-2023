#include <bits/stdc++.h> 
static bool compare(vector<int> &a,vector<int> &b){
    if(a[1]==b[1])return a[0]>b[0];
    return a[1]>b[1];
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),compare);
    int profit=0;
    vector<int> assign(3001,0);
    int n=jobs.size();
    for(int i=0;i<n;i++){
        bool take=false;
       int j=jobs[i][0];
        while(j>0){
            if(!assign[j]){
                assign[j]=1;
                take=true;
                break;
            }
            j--;
        }
        if(take)profit+=jobs[i][1];
    }
    return profit;
}
