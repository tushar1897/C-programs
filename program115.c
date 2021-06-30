//accept number from user and one position
//and ON that bit if its OFF if ON then do nothing

#include<stdio.h>

unsigned int CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x00000001;
    unsigned int Result = 0;

iMask = iMask <<(iPos-1);

Result = iNo | iMask;

return Result;


}

int main()
{
    unsigned int iValue = 0, iPos = 0;
    int iRet = 0;

    printf("enter number\n");
    scanf("%u",&iValue);
    printf("enter Value\n");
    scanf("%d",&iPos);

    iRet = CheckBit(iValue,iPos);

    printf("%d",iRet);
    return 0;
}