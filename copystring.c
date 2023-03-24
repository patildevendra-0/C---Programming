#include<stdio.h>

void StrCopy(char *str,char *dest)
{
    while(*str!='\0')
    {
        *dest = *str;
        *str++;
        *dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",Arr);

    StrCopy(Arr,Brr);
    printf("Copy string: %s\n",Brr);

    return 0;
}