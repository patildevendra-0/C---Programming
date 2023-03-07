#include<stdio.h>
#include<stdbool.h>

bool Check_Digit(char ch)
{
    bool bFlag = false;

    if((ch>='a') && (ch<='z'))
    {
        bFlag = true;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the value:");
    scanf("%c",&cValue);

    bRet = Check_Digit(cValue);
    if(bRet == true)
    {
        printf("%c is a small letter",cValue);
    }
    else
    {
        printf("%c is not small letter",cValue);
    }

    return 0;
}

