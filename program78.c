//display separate letters of string on separate lines

#include<stdio.h>

void Display(char str[])
{
    printf("characters from string are\n");

    while(*str != '\0')
    {
        printf("%c\n",*str);
        str++;
    }
}

int main()
{
    char Arr[40];

    printf("enter your name\n");
    fgets(Arr,10,stdin);           //Hello

    Display(Arr);
    return 0;
}