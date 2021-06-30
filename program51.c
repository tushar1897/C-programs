/*
input : 3 3
 output : * * *
          * * *
          * * *
*/

#include<stdio.h>
void Pattern(unsigned int iRow, unsigned int iCol)
{
    int i = 0, j = 0;
    for(i=1; i<=iRow; i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("*\t");
        }printf("\n");
    }
}

int main()
{
    unsigned int iValue1 = 0, iValue2 = 0;
    char cValue = '\0';

    printf("enter number of rows : \n");
    scanf("%lu",&iValue1);
    printf("enter number of columns : \n");
    scanf("%lu",&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}