//left shift program

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x00000001;
    unsigned int Result = 0;

if((iPos<1)||(iPos>32))
{
    return FALSE;
}

iMask = iMask <<(iPos-1);

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
    unsigned int iValue = 0, iPos = 0;
    BOOL bRet;

    printf("enter number\n");
    scanf("%u",&iValue);
    printf("enter Value\n");
    scanf("%d",&iPos);

    bRet = CheckBit(iValue,iPos);

    if(bRet == TRUE)
    {
        printf("bit is ON\n");
    }
    else
    {
        printf("bit is off\n");
    }
    return 0;
}