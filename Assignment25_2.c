#include<stdio.h>

int Count_Small_Letter(char *ptr)
{
    int iCnt = 0 ,i = 0;
    while(ptr[i]!='\0')
    {
        if((ptr[i]>='a')&&(ptr[i]<='z'))
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}

int main()
{
    char Brr[20];
    int iRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n']s",Brr);

    iRet = Count_Small_Letter(Brr);
    printf("No.of small letter in string is:%d\n",iRet);

    return 0;
}