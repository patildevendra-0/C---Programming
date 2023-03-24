#include<stdio.h>

void StringToggle(char *str)
{
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            *str = *str+32;
        }
        else if(*str>='a'&&*str<='z')
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

    StringToggle(Arr);

    printf("Toggle: %s\n",Arr);


    return 0;
}
