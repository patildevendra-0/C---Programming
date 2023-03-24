#include<stdio.h>
#include<stdbool.h>

bool Check_Letter(char *str ,char ch)
{
    while(*str!='\0')
    {
        if(*str == ch)
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the letter: \n");
    scanf(" %c",&cValue);

    bRet = Check_Letter(Arr,cValue);
    if(bRet == true)
    {
        printf("%c is present in given string \n");
    }
    else
    {
        printf("%c is not present in given string\n");
    }


    return 0;
}