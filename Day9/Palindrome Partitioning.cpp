#include <bits/stdc++.h> 
vector<vector<string>> ans;
bool ispal(string s){
    int st=0,end=s.length()-1;
    while(st<end){
        if(s[st]!=s[end])return false;
        st++;end--;
    }
    return true;
}
void helper(string &s,int i,vector<string>& res){
    if(i==s.length()){ans.push_back(res);return;}
    for(int j=i;j<s.length();j++){
        if(ispal(s.substr(i,j-i+1))){
            res.push_back(s.substr(i,j-i+1));
            helper(s,j+1,res);
            res.pop_back();
        }
    }
}
vector<vector<string>> partition(string &s) 
{
    vector<string> res;
    helper(s,0,res);
    return ans;
    // Write your code here.
}
