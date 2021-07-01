//accept number from user and return multiplication of digits
//input : 7 5 2 1
//output : 70
//input : 4502
//output : 40

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit!=0)
        {
        iMult = iMult * iDigit;
        }
    iNo = iNo/10;
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet=0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet = MultDigit(iValue);
    printf("Multiplucation is : %d",iRet);


    return 0;
}