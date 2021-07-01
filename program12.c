//input : 4
//output : 4*3*2*1 (24)
#include<stdio.h>
int Fact(int iNo)
{
    int iCnt =0; int iMult =1;

    for(iCnt =iNo; iCnt>0; iCnt--)
    {
        iMult =iCnt * iMult;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet =0;

    printf("enter number\n");
    scanf("%d",&iValue);
    iRet = Fact(iValue);
    printf("result is : %d\n",iRet);
    return 0;
}