//reverse the string not just show it in reverse order but actually reverse the string
//input : i n d i a n
//output : n a i d n i
#include<stdio.h>

void Reverse(char str[])
{
    char *start,*end;
    char temp;
    start = str;
    end = str;
    while(*end!='\0')
    {
        end++;
    }end--;
    while(start<end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main()
{
    char Arr[10];
    printf("enter string\n");
    scanf("%[^\'n']s",Arr);
    Reverse(Arr);
    printf("reverse string is : %s\n",Arr);
    return 0;
}