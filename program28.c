//accept number from user and check wheather that number is pallindrom or not
//input : 7521
//output :false
//input : 121
//output : true
#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit =0;
    int iRev =0;
    int iTemp = 0;
    if(iNo < 0)
    { iNo = -iNo; }
    iTemp = iNo;
    
    while(iNo>0)
    {
        iDigit = iNo%10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo/10;
    }
    if(iRev == iTemp)
        {      return true;   }
        else
        {      return false;  }
}
int main()
{
    int iValue = 0;
    bool bRet;
    printf("enter number\n");
    scanf("%d",&iValue);
    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
        printf("it is pallindrome");
    }
    else{
        printf("it is not pallindrome");
    }
    return 0;
}