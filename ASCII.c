#include<stdio.h>

void Display_ASCII()
{
    int i = 0;
    printf("__________________________________________________\n");
    printf("ASCII TABLE\n");
    printf("__________________________________________________\n");
    printf("charachter\t decimal\t hex\t octal\t\n");

    for(i = 0;i<=127;i++)
    {
        printf("%c\t %d\t %x\t  %o\t\n",i,i,i,i);
    }
    printf("____________________________________________________");

}

int main()
{
    Display_ASCII();

    return 0;
}