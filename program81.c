//calculate string length

#include<stdio.h>

int strlenX(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        printf("%d : %c : %d \n",iCnt,*str,*str);
        iCnt++;
        str++;
    }return iCnt;
}

int main()
{
    char Arr[10];
    int iRet =0;

    printf("enter your name\n");
    //fgets(Arr,10,stdin);
    scanf("%[^'\n']s",Arr);

    iRet = strlenX(Arr);
    printf("string length is : %d\n",iRet);
    return 0;
}