bool isPalindrome(int x){
    long reverse =0,initVar =x, previous;
    while (initVar != 0) {
        previous = initVar % 10;
        reverse = reverse * 10 + previous;
        initVar /= 10;
    }
    printf("reverse = %d and x = %d",reverse,x);
    if (reverse == x && x>=0){
        return true;
    }
    else{
        return false;
    }
}