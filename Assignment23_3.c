#include<stdio.h>
#include<stdbool.h>

bool Check_Digit(char cNo)
{
    bool bFlag = false;

    if((cNo>='0') && (cNo<='9'))
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
        printf("%c is a Digit",cValue);
    }
    else
    {
        printf("%c is not Digit",cValue);
    }

    return 0;
}

