//lower triangle pattern

#include<stdio.h>
void Pattern(unsigned int iRow, unsigned iCol)
{
    int i=0,j=0;
    if(iRow != iCol)
    {
        printf("invalid");
        return;
    }
    for(i=iRow; i>=1; i--)                      //outer loop ulta firavla
    {
        for(j=1; j<=iCol; j++)                  //inner loop saral firavla
        {
            if(i<=j)               
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
        }printf("\n");
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