//accept 2 numbers from user and return the min and max number

/* algorithm for maximum
START
accept first number as no1
accept second number as no2

if no1>no2 
  then no1 is maximum

otherwise
  no2 is maximum

STOP
*/

//include the user defined file
#include"header2.h"

int main()
{
    int ino1 = 0;
    int ino2 = 0;
    int iret=0;
    
    printf("enter first number \n");
    scanf("%d",&ino1);

    printf("enter second number\n");
    scanf("%d",&ino2);

    maximum(ino1,ino2);

    iret = maximum(ino1, ino2);
    printf("maximum number is : %d\n",iret);


    return 0;
}