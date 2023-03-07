#include<stdio.h>

void Display_ASCII(char ch)
{
    printf("________ASCII values_____________\n");
    printf(" \n");
    printf("charachter Decimal  Hexa   oct\n ");
    printf("%c\t   %d\t    %x\t    %o\n",ch,ch,ch,ch);

}

int main()
{
    char cValue = '\0';
    
    printf("Enter the Charachter :");
    scanf("%c",&cValue);

    Display_ASCII(cValue);
    
    return 0;
}