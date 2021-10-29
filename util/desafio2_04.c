int getTotalOfEvenvalues(int *vetor, int length){
    
    int sumEvenValues = 0;

    for(int i = 0; i < length; i++)
    {
        if(vetor[i]%2 == 0){
            sumEvenValues++;
        } 
    }

    return sumEvenValues;
};