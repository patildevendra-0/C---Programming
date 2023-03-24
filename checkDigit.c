#include<stdio.h>
#include<stdbool.h>

bool Check_Digit(char ch)
{
    if(ch>='0'&&ch<='9')
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

    printf("Enter the charchter: \n");
    scanf("%c",&cValue);

    bRet = Check_Digit(cValue);
    if(bRet == true)
    {
        printf("%c is digit",cValue);
    }
    else
    {
        printf("%c is not digit",cValue);
    }

    return 0;

}