void fillArrayWithValidValueByIndex(int *array, int startIndex, int step, int endIndex)
{
    for(int i = startIndex; i <= endIndex; i += step)
    {
        array[i] = getValidValueByIndex(i);
    }
}

int getValidValueByIndex(int index){
    if(index%2 == 0){
        return 20;
    } else {
        return 10;
    }
};