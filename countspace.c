#include<stdio.h>

int CountSpace(char *str)
{
    int iCount = 0;

    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("enter the string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);
    printf("Space count :%d\n",iRet);

    return 0;
}