#include<stdio.h>

void strlwrx(char *str)
{
    
    while(*str!='\0')
    {
        if(*str>='A'&&*str<='Z')
        {
            *str-='A'-'a';
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
            break;
        }
       
    }


}
int main()
{
    char Arr[50];

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    strlwrx(Arr);

    return 0;
}