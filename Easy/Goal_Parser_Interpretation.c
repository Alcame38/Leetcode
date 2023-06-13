char * interpret(char * command){ //replacing each "()","(al)" by "o","al"
    char* returnCom = (char *)calloc(strlen(command)+1,1);
    int j = 0;
    for (int i = 0;i<strlen(command);i++){
        if(command[i] == '('){
            i++;
            if(command[i]==')'){
                returnCom[j] = 'o';
                j++;
            }
            else{
                returnCom[j] = 'a';
                j++;
                returnCom[j] = 'l';
                j++;
            }
        }
        if(command[i]=='G'){
            returnCom[j]='G';
            j++;
        }
    }
    return returnCom;
}