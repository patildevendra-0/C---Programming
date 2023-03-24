#include<stdio.h>

char toUpper(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch-32;
    }
    else
    {
        return ch;
    }
}

char tolower(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        return ch+32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the charachter: \n");
    scanf("%[^'\n']s",&cValue);

    cRet = tolower(cValue);
    printf("UPPER: %c\n",cRet);

}