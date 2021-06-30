//calculate string length

#include<stdio.h>

int countA(char str[])
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if((*str == 'a')||(*str == 'A'))
        {
            iCnt++;
        }str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet =0;

    printf("enter your name\n");
    //fgets(Arr,10,stdin);
    scanf("%[^'\n']s",Arr);

    iRet = countA(Arr);
    printf("string length is : %d\n",iRet);
    return 0;
}