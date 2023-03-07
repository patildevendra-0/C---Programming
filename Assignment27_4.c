#include<stdio.h>

int Last_Occurance(char *str,char ch)
{
    int i = 0 , itemp = 0 ;
    while(str[i]!='\0')
    {
        if(str[i]==ch)
        {
            itemp = i;
        }
        i++;
    }
    return itemp;

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

    iRet = Last_Occurance(Arr,cValue);
    
    printf("last Occurance in string is on  :%d\n",iRet);
    
    return 0;
}