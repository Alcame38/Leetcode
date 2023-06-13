int numJewelsInStones(char * jewels, char * stones){
    int x = 0;
    for (int i = 0; i<strlen(jewels);i++){
        for (int j = 0; j<strlen(stones);j++){
            if (jewels[i] == stones[j]){ // looping for each stone to verify if it's a jewel
                x++;
            }
        }
    }
    return x;
}