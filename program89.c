//convert string from capital to strong

#include<stdio.h>

int strtoggleX(char str[])
{
    while(*str != '\0')
    {
        if((*str >'a')&&(*str<'z'))
        {
            *str = *str - 32;

        }str++;
        else if((*str>='A')&&(*str<'Z'))
        {
            *str = *str + 32;
        }str++;
    }
}

int main()
{
    char Arr[10];
    int iRet =0;

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);
    printf("updated string is : %s\n",Arr);
    return 0;
}