#include<stdio.h>

void evenodd(int arr[], int iNo)
{
    int i = 0;
    for(i =0; i<iNo; i++)
    {
        if(arr[i]%2 == 0)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i = 0; i<iNo; i++)
    {
        if(arr[i]%2 != 0)
        {
            printf("%d ",arr[i]);
        }
    }
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int iSize = 10;

    evenodd(arr, iSize);
    return 0;
}