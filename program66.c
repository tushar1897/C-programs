//accept n numbers from user and display those numbers
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)              //step 6
{
    int i = 0;
    printf("elements from the array are : \n");
    for(i=0; i<iSize;i++)
    {
        printf("%d",Arr[i]);
    }
}

int main()
{
    int*arr = NULL;     //step 1
    int iLength = 0, i =0;

    printf("enter the number of elements\n");        //step 2
    scanf("%d",&iLength);

    arr = (int*) malloc(iLength * sizeof(int));        //step 3

    printf("enter the elements\n");
    
    for(i = 0; i<iLength; i++)                      //step 4
    {
        scanf("%d",&arr[i]);
    }

    Display(arr,iLength);                           //step 5

    free(arr);                               //step 7
    return 0;
}
