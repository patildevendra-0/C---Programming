#include<stdio.h>

int Countsmall(char *str)
{
    int iCount = 0;
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
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

    iRet = Countsmall(Arr);
    printf("%d\n",iRet);

    return 0;
}