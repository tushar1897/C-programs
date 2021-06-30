//copy string from one array into another array in reverse order
//in : Hello
//op : HELLO
#include<stdio.h>

void strcatX(char src[], char dest[])
{
    int iCnt =0;
    if((src== NULL)||(dest == NULL))
    {
        printf("error");
    }
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];

    printf("enter string : \n");
    scanf("%[^'\n']",arr);                 //demo

    printf("enter string : \n");
    scanf(" %[^'\n']",brr);                 //hello

    strcatX(arr,brr);

    printf("after copy string is : %s\n", brr);         // hellodemo

    return 0;
}