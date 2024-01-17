int findUnique(int *arr, int size)
{  int unique=0;
    for(int i=0;i<size;i++){
        unique^=arr[i];
    }
    return unique;
    //Write your code here
}
