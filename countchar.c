#include<stdio.h>

int Countchar(char *str)
{
    int iCount = 0;
    char cValue = '\0';
    printf("Enter the charachter: ");
    scanf("%s",&cValue);

    while(*str!='\0')
    {
        if(*str == cValue)
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n']s",Arr);

    iRet = Countchar(Arr);
    printf("Count %d\n",iRet);

    return 0;
}