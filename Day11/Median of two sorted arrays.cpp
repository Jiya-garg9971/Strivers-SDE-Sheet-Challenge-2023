double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	int n=a.size();
	int m=b.size();
	if(n<m)return median(b,a);
	int total=(n+m+1);
	bool take=false;
	if(total%2==0)take=true;
	int k=total/2;
	int sum=0;
	double prev1,prev2,next1,next2;
	int st=0,hi=n-1;
	while(st<=hi){
		int mid=(st+hi)/2;
		int rem=k-mid;
		prev1=mid>0?a[mid-1]:INT_MIN;
		prev2=rem>0?b[rem-1]:INT_MIN;
		next1=mid<n?a[mid]:INT_MAX;
		next2=rem<m?b[rem]:INT_MAX;
		if(prev1<=next2 and prev2<=next1){
			if((m+n)%2==0)return (max(prev1,prev2)+min(next1,next2))/2;
			else return max(prev1,prev2);
		}
		if(prev1>next2){
			hi=mid-1;
		}
		else{
			st=(mid+1);
		}
	}
	return sum;
}
