#include<stdio.h>
int FactorsSum(int iNo)
{
    int iCnt = 0, iSum =0;
    if(iNo<0)
    {
        iNo = - iNo;
    }
    for(iCnt = 1; iCnt<= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue =0, iRet =0;

    printf("no1\n");
    scanf("%d", &iValue);
    iRet = FactorsSum(iValue);
    printf("summation of factors is:%d\n",iRet);
    return 0;
}
