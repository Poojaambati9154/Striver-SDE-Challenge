#include <bits/stdc++.h> 

bool static comparator(vector<int>s1,vector<int>s2){
    return (s1[1]>s2[1]);
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    sort(jobs.begin(),jobs.end(),comparator);
    int maxi=jobs[0][0];
    for(int i=0;i<jobs.size();i++){
        maxi=max(maxi,jobs[i][0]);
    }
    
    int pro=0;
    vector<int>a(maxi+1,-1);
    for(int i=0;i<jobs.size();i++){
        for(int j=jobs[i][0];j>0;j--){
            if(a[j]==-1){
                a[j]=i;
                
                pro+=jobs[i][1];
                break;
            }
        }
    }
    return pro;

}
