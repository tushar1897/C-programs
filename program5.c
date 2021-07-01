//write a program which accepts oone number and gives output of addition of all number before one number
//input = 4
//output = 1 + 2 + 3 + 4 = 10

#include<stdio.h>

int sum(int ino)
{
    int icnt =0; int isum = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
//         1          2           3
    for(icnt = 1; icnt <= ino; icnt++)
    {
        isum = isum + icnt;  // 4
    }
    return isum;
}
int main()
{
    int ino = 0;
    int iret = 0;

    printf("enter the number\n");
    scanf("%d",&ino);
    iret = sum(ino);

    printf("addition is : %d\n",iret);
    return 0;
}