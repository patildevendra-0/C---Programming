#include<stdio.h>

int Occurance(char *str,char ch)
{
    int iCnt = 0;
    while(*str!='\0')
    {
        if(*str==ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;

}

int main()
{
    int iRet = 0;
    char Arr[40];
    char cValue ='\0';
    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);

    printf("Enter the charachter you want check in string:");
    scanf("%c",&cValue);

    iRet = Occurance(Arr,cValue);
    
    printf("Occurance of %c in string is :%d\n",cValue,iRet);
    
    return 0;
}