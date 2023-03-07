#include<stdio.h>
#include<stdbool.h>

bool Check_Char(char *str,char ch)
{
    bool bFlag = false;
    while(*str!='\0')
    {
        if(*str==ch)
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
    bool bRet = false;
    char Arr[40];
    char cValue ='\0';
    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the charachter you want check in string:");
    scanf("%c",&cValue);

    bRet = Check_Char(Arr,cValue);
    if(bRet==true)
    {
        printf("%c is peresent in %s",cValue,Arr);
    }
    else
    {
        printf("%c is not present in given string",cValue);
    }
    
    return 0;
}