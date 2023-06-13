char * mergeAlternately(char * word1, char * word2){
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int returnSize = len1+len2;
    char* result = malloc((returnSize+1)*sizeof(char)); // the returned char* will have the size of the first + the second
    int i=0,j=0,k=0;
    while(i<len1 || j<len2)
    {
        if(i<len1) // while the first one isn't finished in case the second is longer
        {
            result[k++] = word1[i++];
        }
        if(j<len2) // same as the previous
        {
            result[k++] = word2[j++];
        }
    }
    result[k] = '\0';
    return result;

}