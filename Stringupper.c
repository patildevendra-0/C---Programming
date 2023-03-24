#include<stdio.h>

void StringUpper(char *str)
{
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            *str = *str-32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];


    printf("Enter the string: \n");
    scanf("%[^'\n']s",Arr);

    StringUpper(Arr);

    printf("UPPER: %s\n",Arr);

    return 0;
}