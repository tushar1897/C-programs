//outer edge *
//inner cube #

#include<stdio.h>
void Pattern(unsigned int iRow, unsigned iCol)
{
    int i=0,j=0;
    
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if((i==1)||(i==iRow)||(j==1)||(j==iCol))
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");                
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