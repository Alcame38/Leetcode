int removeElement(int* nums, int numsSize, int val){ 
    int temp = 0, i = 0, incr=0;
    for (i=0;i<numsSize;i++){
        if (nums[i] != val){
            temp = nums[i];
            nums[i]=nums[incr];
            nums[incr]=temp;
            incr++;
        }
    }
    return incr;
}