int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int ans=1;
    int cnt=1;
    int i=1;
    int j=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            cnt++;
            i++;
        }
        else{
            cnt--;
            j++;
        }
        ans=max(ans,cnt);
    }
    return ans;
}