#include<stdio.h>

void StringCopy(char *str,char *dest)
{
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            *dest = *str-32;
        }
        else
        {
            *dest = *str;
        }
        str++;
        dest++;
    }
    *dest = '\0';
}

int main()
{

    char Arr[20];
    char Brr[20];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    StringCopy(Arr,Brr);

    printf("Upper string: %s\n",Brr);

    return 0;
}