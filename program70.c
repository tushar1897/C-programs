//even element count in array

#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iLength)
{
    int i = 0;int iCnt =0; int iFact = 0 , iNonfact =0, iDiff =0;
    
    for(i = 0; i< iLength; i++)
    {
        if((Arr[i]%2) == 0)
        {
            iFact = iCnt;
        }
        else
        {
            iNonfact = iCnt;
        }
    }return iFact - iNonfact;
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
    iRet = EvenCount(arr,iSize);
    printf("difference is : %d\n",iRet);
    free(arr);
    return 0;
}