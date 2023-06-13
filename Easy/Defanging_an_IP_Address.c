char * defangIPaddr(char * address){
    int i,y = 0;
    char *test = malloc((strlen(address)+6) * sizeof(int)); // knwoing an IPv4 address have 3 dots 
    //while (address[i] != "\0"){
    for(i=0;*(address+i)!=0;i++){ // checking for a dot and onces found adding the necessary
        if (*(address+i) == '.'){
            test[y] = '[';
            test[y+1] = '.';
            test[y+2] = ']';
            y++;
            y++;
        }
        else{
            test[y] = *(address+i); // adding number to test array
        }
        y++;
    }
    test[y] = 0;
    return test;
}