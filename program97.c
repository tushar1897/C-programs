//copy string from one array into another array in reverse order
//in : Hello
//op : HELLO
#include<stdio.h>

void strcpyXX(char src[], char dest[])
{
    int iCnt =0;
    if((src== NULL)||(dest == NULL))
    {
        printf("error");
    }
    while(*src != '\0')
    {
        if((*src >='a')&&(*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
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
    scanf("%[^'\n']",arr);

    strcpyXX(arr,brr);

    printf("original string is : %s\n", arr);
    printf("after copy string is : %s\n", brr);

    return 0;
}