int hammingWeight(uint32_t n) {
    int res = 0;
    while (n > 0) { // n become 0 once all 1 will be shifted
        res += n & 1;  //looping to check the value of each bit,  |Check the least significant bit
        n >>= 1;       // right-shift the number by 1 bit using the >> operator. This discards the least significant bit and shifts all the other bits one position to the right.
    }
    return res;
}