void f(int i,int j,vector<vector<int>>&ans,vector<vector<int>> &image,int newColor,int ini){
    int n=image.size();
    int m=image[0].size();
    if(i<0 || i>=n||j<0 ||j>=m||ans[i][j]==newColor || image[i][j]!=ini){
        return;
    }
    ans[i][j]=newColor;
    f(i+1,j,ans,image,newColor,ini);
    f(i-1,j,ans,image,newColor,ini);
    f(i,j+1,ans,image,newColor,ini);
    f(i,j-1,ans,image,newColor,ini);
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    int ini=image[x][y];
    vector<vector<int>>ans=image;
    
    f(x,y,ans,image,newColor,ini);
    return ans;
}