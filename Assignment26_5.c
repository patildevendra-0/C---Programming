#include<stdio.h>

void Count_Space(char *str)
{
    int iCnt = 0;
    while(*str!='\0')
    {
        if(*str==' ')
        {
            iCnt++;
        }
        *str++;
    }
    printf("White spaces in given string is:%d\n",iCnt);

}
int main()
{
    char Arr[50];

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    Count_Space(Arr);

    return 0;
}