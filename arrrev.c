#include<stdio.h>
#include<stdlib.h>

int ArrayReverse(int arr[], int iStart, int iSize)
{
    int iTemp = 0;
    int iEnd = iSize-1;

    while(iStart<iEnd)
    {
        iTemp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = iTemp;
        iStart++;
        iEnd--;
    }

    printf("reversed array is : \n");
    for(int i = 0; i<iSize; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int * arr = NULL;
    int iSize = 0;
    int i = 0;
    printf("enter number of elements : ");
    scanf("%d",&iSize);

    arr = (int *) malloc(sizeof(int)* iSize);

    printf("enter elements : \n");
    for(int i = 0; i<iSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    ArrayReverse(arr, 0, iSize);
    return 0;
}