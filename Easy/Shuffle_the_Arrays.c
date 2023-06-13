/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){ //given n spliting the array in two and shuffling them as x1,y1,x2,y2...
    int* test = malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    int i,j=0;
    for (int i = 0; i<n; i++){
        test[j] = nums[i];
        test[j+1] = nums[i+n];
        j+=2;
    }
    return test;
}