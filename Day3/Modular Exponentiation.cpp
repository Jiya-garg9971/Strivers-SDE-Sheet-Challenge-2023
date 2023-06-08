#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	long long ans=1;
	long long X=(long long)x;
	long long M=(long long)m;
	while(n){
		if(n%2){
			ans=ans*X;
			n-=1;
		}
		else{
			X=X*X;
			X=(X+M)%M;
			n/=2;
		}
		ans=(ans+M)%M;
	}
	return ans;
}
