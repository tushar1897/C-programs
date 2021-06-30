//input : 3
//output : * 3 * 2 * 1
#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt> 0; iCnt--)
    {
      printf(" * ");
      printf("%d", iCnt);
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