int singleNumber(int* nums, int numsSize){
   int xor = 0;
   for (int i=0;i<numsSize;i++){
       xor^=nums[i];
       /*
       Here the xor operator ^ will transform itself in + or minus if the byte of 
       a number already exist if not it will be a plus and if it is it will be a -
       */
   } 
   return xor;
}