//accept string from user and count white spoaces in that string

#include<stdio.h>

int counta(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
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
    printf("frequency of spaces is : %d\n",iRet);
    return 0;
}