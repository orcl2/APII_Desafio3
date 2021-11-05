void fillArray(int num, int *vetorA, int *vetorB, int *idxVetorA, int *idxVetorB){
    if(num != 0){
        if(num%2 == 0){
            *idxVetorA = *idxVetorA + 1;
            resizeIntArray(vetorA, num, *idxVetorA);
        }
        else {
            *idxVetorB = *idxVetorB + 1;
            resizeIntArray(vetorB, num, *idxVetorB);
        } 
    } 
};