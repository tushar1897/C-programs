//input : 5
//output : A B C D E
#include<stdio.h>
void Pattern(unsigned int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt =1; iCnt<= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
    }
}

int main()
{
    unsigned int iValue = 0;
    char cValue = '\0';

    printf("enter number\n");
    scanf("%u",&iValue);

    Pattern(iValue);
    return 0;
}