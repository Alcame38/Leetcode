int mostWordsFound(char ** sentences, int sentencesSize){ // Comparing number of words in two sentences
    int max=0;
    for (int i=0;i<sentencesSize;i++){
        int actualMax = 0;
        for (int j = 0;j<strlen(sentences[i]);j++){
            if (sentences[i][j] == ' '){
                actualMax++;
            }
        }
        if (actualMax>max) max=actualMax;
    }
    return max+1;
}