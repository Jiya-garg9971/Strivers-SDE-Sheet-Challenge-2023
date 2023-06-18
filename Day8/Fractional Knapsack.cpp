#include <bits/stdc++.h> 
static bool compare(pair<int,int> &a,pair<int,int> &b){
    double p1=double(a.second)/double(a.first);
     double p2=double(b.second)/double(b.first);
     return p1>=p2;

}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    double sum=0;
    sort(items.begin(),items.end(),compare);
    for(int i=0;i<n;i++){
        if(w>=items[i].first){
            w-=items[i].first;
            sum+=(double)items[i].second;
        }
        else {
            double p2=double(items[i].second)/double(items[i].first);
            sum+=p2*double(w);
            break;
        }
    }
    return sum;
}
