#include<stdio.h>

void Display_Letters(char ch)
{
    int iCnt = 0;
    if(ch>='a' && ch<='z')
    {
        for(iCnt = ch;iCnt>='a';iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
    else if(ch>='0'&&ch<='9')
    {
        return;
    }
    else
    {
        for(iCnt=ch;iCnt<='Z';iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the lette :");
    scanf("%c",&cValue);

    Display_Letters(cValue);

    return 0;
}