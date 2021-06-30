//last occurance in array

#include<stdio.h>
#include<stdlib.h>

int LastOccurance(int Arr[], int iLength, int iValue)
{
    int i = 0;
    
    for(i = iLength-1; i>=0; i--)            //iLength-1 for optimisation
    {
        if(Arr[i] == iValue)
        {
            break;
        }
    }
    return i;
}


int main()
{
    int *arr = NULL;
    int i = 0, iSize = 0,iRet = 0; int iNo =0;
    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);
    
    arr = (int*)malloc(iSize*sizeof(int));
    
    printf("Enter the elements\n");
    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter element that you want to search\n");
    scanf("%d",&iNo);
    
    iRet = LastOccurance(arr,iSize,iNo);
    if(iRet==-1)
    {
        printf("there is no such number\n");
    }
    else
    {
        printf("last occurance is at : %d\n",iRet);
    }
    free(arr);
    return 0;
}