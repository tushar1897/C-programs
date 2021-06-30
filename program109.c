//toggle 3rd digit
#include<stdio.h>

unsigned int ToggleBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000004;
    unsigned int Result = 0;
    Result = iNo ^ iMask;

    return Result;
}


int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("enter the  number\n");
    scanf("%u", &iValue);

    iRet = ToggleBit(iValue);

    printf("number after updatation : %d\n",iRet);
    return 0;
}