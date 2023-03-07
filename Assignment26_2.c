#include<stdio.h>

void struprx(char *str)
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
            break;
        }
       
    }

}
int main()
{
    char Arr[30];
    
    printf("Enter the string:");
    scanf("%[^'\n']s",Arr);

    struprx(Arr);

    return 0;
}