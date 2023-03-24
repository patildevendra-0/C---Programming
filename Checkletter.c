#include<stdio.h>
#include<stdbool.h>

bool Check_Letter(char *str,char ch)
{
    bool bFlag = false;

    while(*str!='\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charachter: \n");
    scanf(" %c",&cValue);

    bRet = Check_Letter(Arr,cValue);
    if(bRet == true)
    {
        printf("%c is present in string \n");
    }
    else
    {
        printf("%c is not present in string\n");
    }

    return 0;
}