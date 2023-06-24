#include <bits/stdc++.h>

int modularExponentiation(int xx, int n, int M) {
	// Write your code here.
	long long  ans=1;
	long long x=xx;
	while(n!=0){
		if(n%2!=0){
			ans=(ans*x)%M;
			n--;
		}
		else{
			x=(x*x)%M;
			n=n/2;
		}
	}
	return (int)(ans)%M;
}