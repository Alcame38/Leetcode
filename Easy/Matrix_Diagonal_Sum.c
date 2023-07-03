int diagonalSum(int** mat, int matSize, int* matColSize){
    int sum=0;
    for (int j=0;j<matSize;j++){
        sum+=mat[j][j];
    }
    if (matSize == 1){
        sum=mat[0][0];
        return sum;
    }
    if (matSize%2 != 0){
        int j = matSize-1;
        while (j!=-1){
            sum+=mat[j][(matSize-1)-j];
            j--;
        }
        sum-=mat[(matSize-1)/2][(matSize-1)/2];
        return sum;
    }
    else{
        int j = matSize-1;
        while (j!=-1){
            sum+=mat[j][(matSize-1)-j];
            j--;
        }
        return sum;
    }
}