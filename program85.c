//calculate small alphabets fron string entered

#include<stdio.h>

int counta(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet =0;

    printf("enter your name\n");
    //fgets(Arr,10,stdin);
    scanf("%[^'\n']s",Arr);

    iRet = counta(Arr);
    printf("frequency of small is : %d\n",iRet);
    return 0;
}