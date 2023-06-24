int bs(vector<int>row,int mid){
    int l=0;
    int h=row.size()-1;
   
    while(l<=h){
        int m=(l+h)/2;
        if(row[m]<=mid){
            
            l=m+1;
        }
        else{
           h=m-1;
        }
    }
    return l;
}
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    int low=1;
    int high=1e9;
   
  
    while(low<=high){
         int cnt=0;
        int mid=(low+high)/2;
        for(int i=0;i<n;i++){
           cnt+=bs(matrix[i],mid);
        }
        if(cnt<=(n*m)/2){
           
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}