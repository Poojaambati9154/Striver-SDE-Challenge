int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code 1
	int cnt=0;
	for(int i=0;i<n-m+1;i++){
		if(s.substr(i,m)==p){
			cnt++;
		}
	}
	return cnt;
}