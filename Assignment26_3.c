#include<stdio.h>

void strtogglex(char *str)
{
    
    while(*str!='\0')
    {
        if(*str>='a'&&*str<='z')
        {
            *str+='A'-'a';
            printf("%c",*str);
            *str++;
        }
        else if(*str==' ')
        {
            printf(" ");
            *str++;
        }
        else
        {
            *str-='A'-'a';
            printf("%c",*str);
            *str++;
        }
    }


}
int main()
{
    char Arr[50];

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    strtogglex(Arr);

    return 0;
}