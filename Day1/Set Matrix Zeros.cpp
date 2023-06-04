#include <bits/stdc++.h>
// mark all that rows and column with value=0
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n=matrix.size();
	int m=matrix[0].size();
	vector<int> rows(n,0),cols(m,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0){
				rows[i]=1;cols[j]=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(rows[i] || cols[j])matrix[i][j]=0;
		}
	}
	return ;
}
