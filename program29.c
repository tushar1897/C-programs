//accept number from the user and return the largest digit
//input : 123947
//output : 9

#include<stdio.h>

int MaxDigit(int iNo)
{
    int iMax = 0, iDigit = 0;
    if (iNo<0)
    {    iNo = -iNo;    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {iMax = iDigit;}
        
        iNo = iNo/10;
    } 
    return iMax;   
}

int main()
{
    int iValue =0, iRet = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet = MaxDigit(iValue);
    printf("largest digit : %d\n",iRet);
}