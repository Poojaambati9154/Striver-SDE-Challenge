
int minCharsforPalindrome(string str) {
	// Write your code here.
	int i=0;
	int j=str.size()-1;
	int j2=j;
	int cnt=0;
	while(i<j){
		if(str[i]==str[j]){
			i++;
			j--;
		}
		else{
			cnt++;
			i=0;
			j2--;
			j=j2;
		}
	}
	return cnt;
}
