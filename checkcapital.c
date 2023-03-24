#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if(ch>='A'&&ch<='Z')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the charachter: ");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);
    if(bRet == true)
    {
        printf("%c is capital charachter\n",cValue);
    }
    else
    {
        printf("%c is not capital charachter",cValue);
    }

    return 0;
}