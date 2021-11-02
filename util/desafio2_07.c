void fillArrayY(int *vetorX, int *vetorY){

    for(int i = 0; i < 10; i++)
    {
        if(i%2 == 0)
            vetorY[i] = vetorX[i] * 2;
        else    
            vetorY[i] = vetorX[i] * 3;
    }
};