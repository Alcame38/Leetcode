int searchInsert(int* nums, int numsSize, int target){
    for (int i =0;i<numsSize;i++){
        if (nums[i] == target){
            return i;
        }
    }
    if (target<nums[0]){
        return 0;
    }
    for (int i =1;i<numsSize;i++){
        if (target<nums[i] && target>nums[i-1]){
            return i;
        }
    }
    return numsSize;
}