/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){ //fibonacci like
    int* returnArray = malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    int temp=0;
    for (int i = 0;i<numsSize;i++){
        returnArray[i] = temp+nums[i];
        temp = returnArray[i];
    }
    return returnArray;
}