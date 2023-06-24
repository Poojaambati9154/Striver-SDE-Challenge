#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
	// Write your code here.
	int r=m-1;
	int N=n+m-2;
	double ans=1.0;
	for(int i=1;i<=r;i++){
       ans=ans*(N-r+i)/i;
	}
	return (int)ans;
}