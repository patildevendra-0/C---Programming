#include<stdio.h>
#include<stdbool.h>

bool Check_Capital(char ch)
{
    bool bFlag = false;

    if((ch>='A') && (ch<='Z'))
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the letter:");
    scanf("%c",&cValue);

    bRet = Check_Capital(cValue);
    if(bRet == true)
    {
        printf("%c is capital letter",cValue);
    }
    else
    {
        printf("%c is not capital letter",cValue);
    }

    return 0;
}

