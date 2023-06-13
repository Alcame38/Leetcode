/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize){ // concatenate the array with itself
    int* returnArray = malloc(sizeof(int)*numsSize*2);
    *returnSize = 2 * numsSize;
    for (int i = 0; i<numsSize; i++){
        returnArray[i] = nums[i];
    }
    for (int i = 0; i<numsSize; i++){
        returnArray[i+numsSize] = nums[i];
    }
    return returnArray;
}