#include <bits/stdc++.h> 
int distinctSubstring(string &word) {
    //  Write your code here.
    set<string> st;
    for(int i=0;i<word.length();i++){
        string s="";
        for(int j=i;j<word.length();j++){
            s+=word[j];
            st.insert(s);
        }
    }
    return st.size();
}
