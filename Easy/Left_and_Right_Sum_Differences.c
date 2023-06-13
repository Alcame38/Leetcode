/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* leftRightDifference(int* nums, int numsSize, int* returnSize){ // doing the sum from left to right and vice-versa to substract them (assuming to start from 0)
    int* left = malloc(numsSize*sizeof(int));
    int* right = malloc(numsSize*sizeof(int));
    int* final = malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    left[0] = 0;
    right[numsSize-1] = 0;
    //if (numsSize == 1) return left[0]-right[0];
    for (int i=1;i<numsSize;i++){
        left[i] = abs(left[i-1] + nums[i-1]);
        right[numsSize-i-1] = abs(right[numsSize-i] + nums[numsSize-i]);
    }
    for (int i=0;i<numsSize;i++){
        final[i] = abs(left[i] - right[i]);
    }
    return final;
}