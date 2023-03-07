#include<stdio.h>

void Display_Digit(char *str)
{
    
    while(*str!='\0')
    {
        if(*str>='0'&&*str<='9')
        {
            printf("%c",*str);
            
        }
        *str++;
    }


}
int main()
{
    char Arr[50];

    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    Display_Digit(Arr);

    return 0;
}