#include<stdio.h>

int Count_Capital_Letter(char *str)
{
    int iCnt = 0;

    while(*str!='\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

   iRet = Count_Capital_Letter(Arr);
   printf("count of Capital letter in string is:%d\n",iRet);

    return 0;
}