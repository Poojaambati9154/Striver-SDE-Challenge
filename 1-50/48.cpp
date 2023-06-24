#include<bits/stdc++.h>
struct act{
  int start;
  int finish;
  //int pos;
};
bool static comparator(struct act s1,struct act s2){
    return s1.finish<s2.finish;
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n=start.size();
    struct act a[n];
    for(int i=0;i<n;i++){
        a[i].start=start[i];
        a[i].finish=finish[i];

    }
    sort(a,a+n,comparator);
    int limit=a[0].finish;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(a[i].start>=limit){
            limit=a[i].finish;
            cnt++;
        }
    }
    return cnt;
}