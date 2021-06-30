//copy string from one array into another array in reverse order

#include<stdio.h>

void strcpyrevX(char src[], char dest[])
{
    int iCnt =0;
    if((src== NULL)||(dest == NULL))
    {
        printf("error");
    }
    while(*src != '\0')
    {
        iCnt++;
        src++;
    }src--;
    while(iCnt>0)
    {
        *dest = *src;
        src--;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[20];
    char brr[20];

    printf("enter string : \n");
    scanf("%[^'\n']",arr);

    strcpyrevX(arr,brr);

    printf("after copy string is : %s\n", brr);

    return 0;
}