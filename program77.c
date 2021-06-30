
/*
1.create static character array in main function
2.accept the string into that array
3.pass the string to thefunction
4.function will perform the operation on that string
*/

#include<stdio.h>
int main()
{
    char Arr[40];

    printf("enter your name\n");
    scanf("%[^'\n']s",Arr);
    
    //gets(Arr);
    //fgets(Arr,40,stdin);              //fgets(kashyat, kiti, kuthun)
    //scanf("%s",Arr);

    printf("your name is   %s\n",Arr);
    return 0;
}