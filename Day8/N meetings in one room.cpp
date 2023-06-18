#include <bits/stdc++.h> 
vector<int> maximumMeetings(vector<int> &start, vector<int> &end) {
    // Write your code here.
    vector<vector<int>> v;
    int n=start.size();
    for(int i=0;i<n;i++)v.push_back({end[i],i+1,start[i]});
    sort(v.begin(),v.end());
    int st=-1,e=-1;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(v[i][2]>e){
            e=v[i][0];
            ans.push_back(v[i][1]);
        }
    }
    return ans;

}
