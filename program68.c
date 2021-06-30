//sun of all elements with error

#include<stdio.h>
#include<stdlib.h>

int SumDisplay(int Arr[], int iLength)
{
    int i=0;
    int iSum =0;
    for ( i = 0; i < iLength; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}


int main()
{
    int*arr = NULL;
    int i =0; int iSize =0; int iRet =0;

    printf("enter number of elements");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize*sizeof(int));

    printf("enter elements\n");
    for(i=0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = SumDisplay(arr,iSize);
    printf("sum of all elements is : %d\n",iRet);
    free(arr);

return 0;
}