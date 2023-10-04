int singleNumber(int* nums, int numsSize) {
    long long numCount[32] = {0}; // store count for each position, assuming it is a uint32_t
    
    // Count the occurrences of each bit position
    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        for (int j = 0; j < 32; j++) {
            numCount[j] += (num >> j) & 1; // allow to get the value of the bit at
                                           // j position . += allow to know how many time
                                           // the bit have been counted by incrementing (+1).
                                           // value can either be a multiple of 3 (because many
                                           // triplon), null if non existant or one more than the
                                           // multiple of three
            numCount[j] %= 3; // verify if multiple of three to keep only the right number
        }
    }
    long long result = 0; // int have 8, long have 16, long long have 32
    for (int i = 0; i < 32; i++) {
        result |= (numCount[i] << i); // re-building the unique number bits by bits
    }
    
    return (int)result;
}