#include<stdio.h>


int strlenX(char * str)
{
    int iCount = 0;
    int iCnt = 0;

    while(str[iCnt]!='\0')
    {
        iCount++;
        iCnt++;
    }
    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string: ");
    scanf("%[^'\n']s",&Arr);

    iRet = strlenX(Arr);
    printf("Length of string is: %d\n",iRet);

    return 0;
}