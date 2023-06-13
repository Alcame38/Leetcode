#include <math.h>
int mySqrt(int x){
    long temp = 0;
    while (temp*temp <= x){ // looping while the product is less than x
        temp +=1;
    }
    return floor(temp-1); //rounding on floor because temp exceeded x
}
