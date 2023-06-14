/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize = numRows;
    *returnColumnSizes = malloc(numRows * sizeof(int));
    int** array = (int**)malloc(numRows * sizeof(int*));
    for (int i=1;i<=numRows;i++){
        (*returnColumnSizes)[i-1] = i;
        array[i-1] = (int*)malloc(numRows * sizeof(int));
        for (int j=0;j<i;j++){
            if (j==0){
                array[i-1][0]=1;
            }
            else if(j==i-1){
                array[i-1][i-1]=1;
            }
            else{
                array[i-1][j] = (array[i-2][j-1]+array[i-2][j]);
            }
        }
    }
    return array;
}