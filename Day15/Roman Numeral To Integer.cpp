#include <bits/stdc++.h> 
int romanToInt(string s) {
    // Write your code here
    vector<int> value={1,5,10,50,100,500,1000};
    vector<char> keys={'I','V','X','L','C','D','M'};
    int sum=0;
    int n=s.length();
    for(int i=0;i<n;i++){
        int total=0;
        int j=0;
        for(;j<7;j++){
            if(keys[j]==s[i]){break;}             
        }
        total=value[j];
        if(i+1<n) {
            int t=0;
            for(;t<7;t++){if(keys[t]==s[i+1])break;}
            if(t<=j) i--; //add
            else total=value[t]-value[j]; 
            i++;
        }
        // cout<<total<<" ";
        sum+=total;
    }
    return sum;    
}
// // CCCLXXXIX
// -->300 + 50 + 10+10+10-1+10
