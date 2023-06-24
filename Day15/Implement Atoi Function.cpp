#include <bits/stdc++.h> 
int atoi(string str) {
    // Write your code here.
    int ans=0;
    bool neg=false;
    for(auto i:str){
        if((i-'0')>=0 and (i-'0')<=9){ans=ans*10+(i-'0');}
        if(i=='-')neg=true;
    }
    if(neg)return -1*ans;
    return ans;
}
