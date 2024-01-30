void sortZeroesAndOne(int input[], int size)
{
    //Write your code here
    int count1=0;
    int count2=0;
    for(int i=0;i<size;i++){
        if(input[i]==0)
        count1++;
        if(input[i]==1)
        count2++;

    }
    for(int i=0;i<count1;i++){
        input[i]=0;
    }
     for(int i=count1;i<count1+count2;i++){
        input[i]=1;
    }
}
