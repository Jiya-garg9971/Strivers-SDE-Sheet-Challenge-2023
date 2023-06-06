#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    int st=intervals[0][0],end=intervals[0][1];
    for(auto i:intervals){
        if(i[0]<=end)end=max(end,i[1]);
        else {
            ans.push_back({st,end});
            st=i[0];end=i[1];
        }
    }
    ans.push_back({st,end});
        return ans;
}
