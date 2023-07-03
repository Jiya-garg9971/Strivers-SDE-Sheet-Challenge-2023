#include<bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    vector<pair<int,int>> v;
    int n=start.size();
    for(int i=0;i<n;i++)v.push_back(make_pair(finish[i],start[i]));
    sort(v.begin(),v.end());
    int st=-1,e=-1;
    int ans=0;
    for(auto i:v){
        if(i.second>=e){
            e=i.first;
            ans++;
        }
    }
    return ans;
    // pair works but not vector reuslting in TLE
}
