//accept number from user and one position
//and OFF that bit if its already OFF then do nothing

#include<stdio.h>

unsigned int CheckBit(unsigned int iNo, int iPos)
{
    unsigned int iMask = 0x00000001;
    unsigned int iResult = 0;

iMask = iMask <<(iPos-1);

iMask = ~iMask;

iResult = iNo & iMask;

return iResult;


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