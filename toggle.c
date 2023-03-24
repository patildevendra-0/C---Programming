#include<stdio.h>

char Toggled(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        return ch+32;
    }
    else if(ch>='a'&&ch<='z')
    {
        return ch-32;
    }
    else
    {
        return ch;
    }
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter the string: \n");
    scanf("%c",&ch);

    cRet = Toggled(ch);
    printf("Toggled: %c\n",cRet);


    return 0;
}