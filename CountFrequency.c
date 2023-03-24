#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCount = 0;

    while(*str!='\0')
    {
        if(*str == ch)
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
    char cValue = '\0';
    int iRet = 0;

    printf("Please enter string\n");
    scanf("%[^'\n']s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of letter : %d\n",iRet);


    return 0;
}