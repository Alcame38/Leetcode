int smallestEvenMultiple(int n){
    if (n%2 !=0){
        return n*2;
    }
    else {
        return n;
    /*    while(n%2==0){
            n /= 2;
        }
        return n*2;*/
    }
}