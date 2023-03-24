#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch>='a')&&(ch<='z'))
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
    bool Ret = false;

    printf("Enter the charchter: ");
    scanf("%c",&cValue);

    Ret = CheckSmall(cValue);
    if(Ret == true)
    {
        printf("%c is a small charachter \n",cValue);
    }
    else 
    {
        printf("%c is not small charachter\n",cValue);
    }

    return 0;
}