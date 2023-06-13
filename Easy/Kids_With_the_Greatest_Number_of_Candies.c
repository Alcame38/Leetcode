/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool *great = malloc(candiesSize * sizeof(bool));
    *returnSize = candiesSize;
    bool biggest = false;
    for (int i=0; i<candiesSize; i++){
        for (int j =0;j<candiesSize;j++){
            if(candies[i]+extraCandies < candies[j]){ // checking if a kid with the extra has more or equal as the kid with the biggest amount of candies
                biggest = true;
            }
        }
        great[i] = !biggest;
        biggest = false;
    }
    return great;
}