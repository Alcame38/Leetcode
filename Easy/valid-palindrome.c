bool isPalindrome(char * s){
    char * concatString= (char*)malloc (sizeof(char)*(1+strlen(s)));
    int j=0;
    for (int i = 0; i<strlen(s);i++){
        if (isalnum(s[i]) && !isspace(s[i])){
            if (!isupper(s[i])){
                concatString[j] = s[i];
            }
            else {
                concatString[j] = tolower(s[i]);
            }
            j++;
        }
    }
    concatString[j] = '\0';
    if (j<=1){
        return true;
    }
    for (int i = 0; i < j / 2; i++) {
        if (concatString[i] != concatString[j-i-1]){
            return false;
        }
    }
    return true;
}