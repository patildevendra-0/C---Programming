#include<stdio.h>
#include<stdbool.h>

bool Check_Special_Char(char ch)
{
    bool bFlag = false;
    if(ch>='!' && ch<='*')
    {   
        bFlag = true;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;
    printf("Enter the Charachter :");
    scanf("%c",&cValue);

    bRet = Check_Special_Char(cValue);
    if(bRet==true)
    {
        printf("%c is a special charachter",cValue);
    }
    else
    {
        printf("%c is not special charachter",cValue);
    }

    return 0;
}