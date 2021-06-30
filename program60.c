/*
i/o : 4 4

o/p :

A
A       B
A       B       C
A       B       C       D
*/
#include<stdio.h>
void Pattern(unsigned int iRow, unsigned iCol)
{
    int i=0,j=0;
    char ch ='\0';
    if(iRow != iCol)
    {
        printf("invalid");
        return;
    }

    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A'; j<=iCol; j++,ch++)
        {
            if(i>=j)
            {
                printf("%c\t",ch);

            }
        }
        printf("\n");
    }
}

int main()
{
    unsigned int iValue1 =0, iValue2=0;
    printf("enter number of rows\n");
    scanf("%u",&iValue1);
    printf("enter number of columns\n");
    scanf("%u",&iValue2);

    Pattern(iValue1,iValue2);
    return 0;
}