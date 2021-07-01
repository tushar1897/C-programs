//accept number from use and display its factors 
//input : 12
//output : 1 2 3 4 6
//input : 20
//output : 1 2 4 5 10 

#include<stdio.h>
void Factors(int iNo)
{
    int iCnt = 0; 
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d", iCnt);
        }
        
    }
}
int main()
{
int iValue = 0;

printf("enter number\n");
scanf("%d",&iValue);
Factors(iValue);

return 0;
}