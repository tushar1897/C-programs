//accept two numbes from user and accept its power
//input : 2 4
//output : 2*2*2   (16)
//
//input : 4 3
// output : 4*4*4  (64)


#include<stdio.h>

int Power(int iNo1, int iNo2)
{
   int iCnt = 0;
   int iMult = 1;

    for(iCnt=1; iCnt<=iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("enter first number\n");
    scanf("%d",&iValue1);
    printf("enter second number\n");
    scanf("%d",&iValue2);
    iRet = Power(iValue1, iValue2);

    printf("result is : %d", iRet);
    return 0;
}