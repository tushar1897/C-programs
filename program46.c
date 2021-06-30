//input : 3
//output : 1 * 2 * 3 * 
#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<= iNo;iCnt++)
    {
        printf("%d", iCnt);
        printf(" * ");
    }
}

int main()
{
    unsigned int iValue = 0;

    printf("enter number\t");
    scanf("%u",&iValue);

    Pattern(iValue);
    return 0;
}