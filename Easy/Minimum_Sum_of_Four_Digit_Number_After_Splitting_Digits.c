int minimumSum(int num){
    int arr[4]; // making an array to get each number split
        for(int i=0;i<4;i++){
            arr[i]=num%10; // get the rest of the div which is the last digit
            num=num/10; // divide by ten to pass to the next digit
        }
    for(int i=0;i<4;i++){ /* this double loop is used to put the 
                              biggest number in first in the array*/
        for(int j=0;j<4;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int sum1 =arr[0]*10+arr[2]+arr[1]*10+arr[3];
    int sum2 =arr[0]*10+arr[3]+arr[1]*10+arr[2];
    return sum1>sum2?sum2:sum1;
}