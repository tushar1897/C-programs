//square root
#include <stdio.h>

int main()
{
    int iNo = 0;
    printf("enter number\n");
    scanf("%d", &iNo);
    for(int i = 2; i<iNo/2; i++)
    {
        if(i*i == iNo)
        {
            printf("root is : %d",i);
        }
    }

    return 0;
}