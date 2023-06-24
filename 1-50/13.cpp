bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m=mat.size();
    int n=mat[0].size();
    int l=0;
    int h=(m*n)-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(mat[mid/n][mid%n]==target){
            return true;
        }
        else if(mat[mid/n][mid%n]<target){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }    
    return false;
}