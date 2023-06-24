bool ispossible(int matrix[9][9],int i,int j,int c){
    for(int k=0;k<9;k++){
        if(matrix[i][k]==c)return false;
        if(matrix[k][j]==c)return false;
        if(matrix[3*(i/3)+k/3][3*(j/3)+k%3]==c)return false;
    }
    return true;
}
bool f(int matrix[9][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(matrix[i][j]==0){
                for(int c=1;c<=9;c++){
                    if(ispossible(matrix,i,j,c)){
                        matrix[i][j]=c;
                        if(f(matrix)==true){
                            return true;
                        }
                        else{
                            matrix[i][j]=0;
                        }
                    }
                }
                return false;
            }
        }
    }
}
bool isItSudoku(int matrix[9][9]) {
    // Write your code here.
    return f(matrix);
}
