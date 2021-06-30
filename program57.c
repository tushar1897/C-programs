/*
i/p : 4 4 

o/p :

1       $       $       $
1       2       $       $
1       2       3       $
1       2       3       4

*/

#include<stdio.h>
void Pattern(unsigned int iRow, unsigned iCol)
{
    int i=0,j=0;
    if(iRow != iCol)
    {
        printf("invalid");
        return;
    }

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(j>i)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t",j);                
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