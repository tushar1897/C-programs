//accept string from user and show in reverse order

#include<stdio.h>

void Display(char str[])
{
    int iCnt =0;
    while(*str !='\0')
    {
        iCnt++;
        str++;
    }str--;
    /*while(iCnt>0)                         //using while loop
    {
        printf("%c",*str);
        iCnt--;
        str--;
    }printf("\n"); */
    for( ; iCnt>0; iCnt--,str--)            //using for loop
    {
        printf("%c",*str);
    }
}

int main()
{
    char Arr[10];
    int iRet =0;

    printf("enter the string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);
    return 0;
}