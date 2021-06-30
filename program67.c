//even elements in array

#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[], int iLength)
{
    int i =0;
    if(Arr == NULL)
    {
        return;
    }
    printf("even elements are\n");
    for(i=0; i<iLength; i++)
    {
        if((Arr[i]%2) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int*arr = NULL;
    int i = 0;
    int iSize = 0;

    printf("enter number of elements: \n");
    scanf("%d",&iSize);

    arr =(int*)malloc(iSize*sizeof(int));

    printf("enter elements \n");
    for(i=0; i<iSize; i++)
    {
        scanf("%d\n",&arr[i]);
    }

    EvenDisplay(arr,iSize);
    free(arr);
    return 0;
}