string kthPermutation(int n, int k) {
    // Write your code here.
    vector<int> v;
    int fact=1;
    for(int i=1;i<n;i++){fact*=i;v.push_back(i);}
    v.push_back(n);
    string ans="";
    k--;
    while(true){
        ans+=to_string(v[k/fact]);
        v.erase(v.begin()+(k/fact));
        if(v.size()==0)break;
        k=k%fact;
        fact/=v.size();
    }
    return ans;

    
}
