bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    int possibility = 0;
    for (int i = 0; i<flowerbedSize;i++){
    if (flowerbedSize==1){
        if (flowerbed[i] == 0 || flowerbed[i] == 1 && n==0){ // checking basic case with only one member
            return true;
        }
        else {
            return false;
        }
    }
    if ((i == 0 && flowerbed[i] == 0 && flowerbed[i+1] == 0) ||
        (i == flowerbedSize-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0) ||
        (i > 0 && i < flowerbedSize-1 && flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0)) { // big check for each cases (first member, last one and middle ones)

            possibility++;
            flowerbed[i] = 1;
        }
    }
    if(n<=possibility){
        return true;
    }
    else{
        return false;
    }
}