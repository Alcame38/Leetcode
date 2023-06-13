int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){ // suming each member of the 2d list and comparing them to know the value of the richest account
    int richestWealth = 0;
    for (int i =0; i<accountsSize;i++){
        int actualSum =0;
        for (int j=0;j<*accountsColSize;j++){
            actualSum +=accounts[i][j];
        }
        if (actualSum>richestWealth){
            richestWealth=actualSum;
        }
    }
    return richestWealth;
}