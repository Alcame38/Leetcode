void moveZeroes(int* nums, int numsSize){
    int zero=0;
    for (int i=0;i<numsSize;i++){
        if (nums[i]!=0){
            nums[zero++] = nums[i]; // moving non-zero nb
        }
    }
    for (;zero<numsSize;zero++){ // looping on zero to add the wanted number of them at the end
        nums[zero]=0;
    }
}  