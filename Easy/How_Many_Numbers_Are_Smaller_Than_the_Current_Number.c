/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int* ret= malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for (int i=0;i<numsSize;i++){ // looping for each number to compare it with the rest of the array
        int temp=0;
        for (int j=0;j<numsSize;j++){
            if(j!=i && nums[i]>nums[j]){
                temp++;
            }
        }
        ret[i] = temp;
    }
    return ret;
}