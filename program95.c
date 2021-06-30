//copy string from one array into another array

#include<stdio.h>

void strcpyX(char src[], char dest[])
{
    if((src== NULL)||(dest == NULL))
    {
        printf("error");
    }
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }*dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];

    printf("enter string : \n");
    scanf("%[^'\n']",arr);

    strcpyX(arr,brr);

    printf("after copy string is : %s\n", brr);

    return 0;
}