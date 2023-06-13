int subtractProductAndSum(int n){
    int rem,mul=1,sum=0;
       while(n!=0) // this manipulation allow to split the int by getting the rest
       {
        rem=n%10;
        mul=mul*rem;
        sum=sum+rem;
        n=n/10;
       }
    return mul-sum;
}