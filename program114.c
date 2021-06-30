//accept one number from user ans accept 2 positions and check if both position bit are ON or OFF
//left shift program

#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

int CheckBit(unsigned int iNo, int iPos1, int iPos2)
{
    unsigned int iMask = 0x00000000;
    unsigned int iMask1 = 0x00000001;
    unsigned int iMask2 = 0x00000001;
    unsigned int Result = 0;

iMask1 = iMask1 <<(iPos1-1);
iMask2 = iMask2 <<(iPos2-1);

iMask = iMask1 | iMask2;

Result = iNo & iMask;

if((Result == iMask))
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
    unsigned int iValue = 0, iPos1 = 0, iPos2 = 0;
    BOOL bRet;

    printf("enter number\n");
    scanf("%u",&iValue);
    printf("enter Value\n");
    scanf("%d",&iPos1);
    printf("enter Value\n");
    scanf("%d",&iPos2);

    bRet = CheckBit(iValue,iPos1, iPos2);

    if(bRet == TRUE)
    {
        printf("bit are ON\n");
    }
    else
    {
        printf("bits are off\n");
    }
    return 0;
}