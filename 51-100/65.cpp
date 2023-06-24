double median(vector<int>& a, vector<int>& b) {
	// Write your code here.
	if(b.size()<a.size())return median(b,a);
	int n=a.size();
    int m=b.size();
	int low=0;
	int high=n;
	while(low<=high){
		int c1=(low+high)/2;
		int c2=(n+m+1)/2-c1;
		int l1,l2,r1,r2;
		if(c1==0)l1=INT_MIN;
		else l1=a[c1-1];
		if(c2==0)l2=INT_MIN;
		else l2=b[c2-1];
		if(c1==n)r1=INT_MAX;
		else r1=a[c1];
		if(c2==m)r2=INT_MAX;
		else r2=b[c2];

		if(l1<=r2 && l2<=r1){
			if((n+m)%2==0){
               return (max(l1,l2)+min(r1,r2))/2.0;
			}
			else{
				return max(l1,l2);
			}
			
		}
		else if(l1>r2){
			high=c1-1;
		}
		else{
			low=c1+1;
		}
	}
	return 0.0;
}