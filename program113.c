//accept numbers from user and accept position from user and toggle that bit(on too off or off to on)

#include<stdio.h>

unsigned int CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x00000001;
    unsigned int Result = 0;

if((iPos<1)||(iPos>32))
{
    return 0;
}

iMask = iMask <<(iPos-1);

Result = iNo ^ iMask;

return Result;
}

int main()
{
    unsigned int iValue = 0, iPos = 0,iRet = 0;

    printf("enter number\n");
    scanf("%u",&iValue);
    printf("enter Value\n");
    scanf("%d",&iPos);

    iRet = CheckBit(iValue,iPos);

    printf("updated  number is : %u\n",iRet);
    return 0;
}