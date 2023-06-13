/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* finalArray = (int*)malloc(2*sizeof(int));
    for (int i=0;i<numsSize;i++){
        for (int j=i+1;j<numsSize;j++){
            if (nums[i]+nums[j]==target){
                finalArray[0] = i;
                finalArray[1] = j;
                printf("i = %d, j = %d\n",i, j);
                return finalArray;
            }
        }
    }
    finalArray[0] = -1;
    finalArray[1] = -1;
    printf("Not possible");
    return finalArray;
}