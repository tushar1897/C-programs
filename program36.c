//i/p : 541
// o/p : 5-1 = 4

#include<stdio.h>

int MaxMin(int iNo)
{
    int iMin =9, iMax =0, iDigit =0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo /10;
    }
    return iMax - iMin;

}

int main()
{
    int iValue1 = 0, iRet = 0;
    printf("enter number\n");
    scanf("%d",&iValue1);
    iRet = MaxMin(iValue1);

    printf("difference is : %d\n", iRet);
    return 0;
}