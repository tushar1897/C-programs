//input : 5 A
//output : A A A A A
//input : 3 B
//output : B B B 
#include<stdio.h>
void Pattern(unsigned int iNo, char ch)
{
    int iCnt = 0;
    for(iCnt = iNo; iCnt> 0; iCnt--)
    {
        printf("%c\t", ch);
    }
}

int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';

    printf("enter number\n");
    scanf("%u",&iValue);
    printf("Enter character\n");
    scanf(" %c",&cValue);

    Pattern(iValue, cValue);
    return 0;
}