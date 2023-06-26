#include <bits/stdc++.h> 
int compareVersions(string a, string b) 
{
    // Write your code here
    int n1=a.length()-1,n2=b.length()-1;
    int i=0,j=0;
    while(i<=n1 || j<=n2){
        long x=0,y=0;
        while(i<=n1 and a[i]!='.'){x=x*10+(a[i]-'0');i++;}
        while(j<=n2 and b[j]!='.'){y=y*10+(b[j]-'0');j++;}
    
         if(x<y)return -1;
        else if(x>y)return 1;
        i++;j++;
    }
    return 0;
}
