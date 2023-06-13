int numIdenticalPairs(int* nums, int numsSize){//checking for each array index if there is an identical number
    int x=0;
    for (int i = 0; i<numsSize; i++){
        for(int j = 0; j<numsSize;j++){
            if (nums[i] == nums[j] && i!=j){
                x++;
            }
        }
    }
    return x/2;
}