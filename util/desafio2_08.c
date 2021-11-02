void modifyArrayM(int *vetorM, int *arrayLength, int *interval){

    for(int i = 0; i < (*arrayLength / 2); i++)
    {
        int aux = vetorM[i + *interval];
        vetorM[i + *interval] = vetorM[i];
        vetorM[i] = aux;
    }
};