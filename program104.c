//problem not working


#include<stdio.h>

int CountOne(unsigned int iNo)
{
    unsigned int iDigit = 0;
    while(iNo> 0)
    {
        int iCnt = 0;
        {
            iDigit = iNo % 2;
            if(iDigit == 1)
            {
                iCnt++;
            }
            iNo = iNo/2;
        }
        return iCnt;
    }
}


int main()
{
    unsigned int iValue = 0;
    int iRet = 0;

    printf("enter the  number\n");
    scanf("%u", &iValue);

    iRet = CountOne(iValue);

    printf("number of on bits are: %d\n",iRet);
    return 0;
}