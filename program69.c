//sum of even elements in array

#include<stdio.h>
#include<stdlib.h>

int SumDisplay(int Arr[], int iLength)
{
    int i=0;
    int iSum =0;
    for ( i = 0; i < iLength; i++)
    {
        if((Arr[i]%2)==0)
        {
            iSum = iSum + Arr[i];
        }
    }
    return iSum;
}


int main()
{
    int*arr = NULL;
    int i =0; int iSize =0; int iRet =0;

    printf("enter number of elements\n");
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
/*
sir code


#include<stdio.h>
#include<stdlib.h>

int SumEvenElements(int Arr[], int iLength)
{
    int iSum = 0, i = 0;
    
    for(i = 0; i< iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iSum = iSum + Arr[i];
        }
    }
    return iSum;
}
int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = SumEvenElements(arr,iSize);
    printf("Summation of all even elemets is : %d\n",iRet);
    free(arr);
    return 0;
}*/
