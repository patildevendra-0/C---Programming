#include<stdio.h>
#include<stdbool.h>

bool Check_Alphabet(char ch)
{
    bool bFlag = false;

    if(((ch>='a') && (ch<='z'))||((ch>='A') && (ch<='Z')))
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

    bRet = Check_Alphabet(cValue);
    if(bRet == true)
    {
        printf("%c is a Alphabet",cValue);
    }
    else
    {
        printf("%c is not Alphabet",cValue);
    }

    return 0;
}

