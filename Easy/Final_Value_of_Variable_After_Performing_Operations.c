#include <string.h>
int finalValueAfterOperations(char ** operations, int operationsSize){ // interprete string and give a value depending on it
    int X = 0;
    for(int i = 0; i<operationsSize;i++){
        if (strcmp(operations[i],"X++") == 0|| strcmp(operations[i],"++X") == 0){
            X++;
        }
        else {
            X--;
        }
    }
    return X;
}