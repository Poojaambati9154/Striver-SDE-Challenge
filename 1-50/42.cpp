int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0;
    int j=0;
    int cnt=0;
    int ans=0;
    while(j<arr.size()){
        if(arr[j]==0){
            cnt++;
        }
        if(cnt>k){
            while(cnt>k){
                if(arr[i]==0){
                   cnt--;
                }
                i++;
            }
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}
