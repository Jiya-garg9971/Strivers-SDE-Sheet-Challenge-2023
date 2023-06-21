#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int> ans;
    map<int,int> mp;
    for(auto i:q){
        if(i[0]==0)mp[i[1]]++;
        else {
            int a=mp.begin()->first;
            mp[a]--;
            if(mp[a]==0)mp.erase(a);
            ans.push_back(a);
        }
    }
    return ans;
}
