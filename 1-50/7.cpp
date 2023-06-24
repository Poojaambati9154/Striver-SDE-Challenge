#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int fr=0;
    int lr=n-1;
    int fc=0;
    int lc=m-1;
    while(fr<lr && fc <lc){
        int temp=mat[fr][fc];
        for(int i=fc+1;i<=lc;i++){
            swap(mat[fr][i],temp);
        }
        fr++;
        for(int i=fr;i<=lr;i++){
            swap(mat[i][lc],temp);

        }
        lc--;
        for(int i=lc;i>=fc;i--){
          swap(mat[lr][i],temp);
        }
        lr--;
        for(int i=lr;i>=fr;i--){
            swap(mat[i][fc],temp);
        }
        fc++;
        mat[fr-1][fc-1]=temp;
    }
 

}