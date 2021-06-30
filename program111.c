//3rd 5th and 7th on or off

//accept number from user and check if 5th bit is ON or OFF

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int CheckBit(unsigned int iNo)
{
    unsigned int iMask = 0x00000054;
unsigned int Result = 0;
Result = iNo & iMask;

if(Result == iMask)
{
    return TRUE;
}
else
{
    return FALSE;
}
}

int main()
{
    unsigned int iValue = 0;
    BOOL bRet;

    printf("enter number\n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == TRUE)
    {
        printf("3rd 5th and 7th bit is ON\n");
    }
    else
    {
        printf("3rd 5th and 7th bit is off\n");
    }
    return 0;
}