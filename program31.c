//accept number from the user and return the largest digit
//input : 123947
//output : 9

#include<stdio.h>

int MinDigit(int iNo)
{
    int iMin = 9, iDigit = 0;
    if (iNo<0)
    {    iNo = -iNo;    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
            if(iMin == 0)  //time complexity reduction : required to reduce the execution time 
            {
                break;
            }
        }
        
        iNo = iNo/10;
    } 
    return iMin;   
}

int main()
{
    int iValue =0, iRet = 0;
    printf("enter number\n");
    scanf("%d",&iValue);
    iRet = MinDigit(iValue);
    printf("smallest digit : %d\n",iRet);
}