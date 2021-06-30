//capital to small / small to capital

#include<stdio.h>

int stlwrX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str >'a')&&(*str<'z'))
        {
            *str = *str - 32;

        }str++;
    }
}

int main()
{
    char Arr[10];
    int iRet =0;

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);

    stlwrX(Arr);
    printf("updated string is : %s\n",Arr);
    return 0;
}