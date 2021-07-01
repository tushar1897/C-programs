// accept number from user and display all the numbers till that number
//input : 8
//output : 1 2 3 4 5 6 7 8
//input : -6
//output : 1 2 3 4 5 6

/* 
START
  accept one number as no
  if number is negative then convert it to positive
  create one counter a Cnt and set it to 1

  iterate till the counter is less then or equal to one number
    print the value of counter on screen
    increment the value of couter by 1
   continue
 END
*/
#include<stdio.h>

void Display(int iNo)  //5
{
  int iCnt = 0;
  if(iNo < 0)
  {
    iNo = -iNo;  // input updater
  }

   //initialisation condition  increment/decrement factor
   //1         2            3
  //for(iCnt = iNo; iCnt >= 0; iCnt--)
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d\n",iCnt);    // 4 loop body
  }
}

int main()  // entry point function
{
  int ivalue = 0;

  printf("enter the number\n");
  scanf("%d",&ivalue);
   Display (ivalue);
  
  return 0;
}