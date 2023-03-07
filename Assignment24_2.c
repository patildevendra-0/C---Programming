#include<stdio.h>

void Display_Letter(char ch)
{
    if((ch>='a')&&(ch<='z'))
    {
        printf("Captil letter:%c",ch-' ');
    }
    else
    {
        printf("Small letter:%c",ch+' ');
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the lette :");
    scanf("%c",&cValue);

    Display_Letter(cValue);

    return 0;
}