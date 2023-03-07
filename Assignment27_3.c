#include<stdio.h>

int First_Occurance(char *str,char ch)
{
    int iCnt = 0;
    while(str[iCnt]!='\0')
    {
        if(str[iCnt]==ch)
        {
            break;
        }
        iCnt++;
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

    iRet = First_Occurance(Arr,cValue);
    
    printf("first Occurance of in string is on  :%d\n",iRet);
    
    return 0;
}