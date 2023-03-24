#include<stdio.h>

void Display_ASCII()
{
    char ch1 = 'A';
    char ch2 = 'Z';
    char ch3 = '0';
    char ch4 = 'a';
    char ch5 = 'z';
    char ch6 = '9';

    printf("Charachter is: %c and its ASCII is: %d\n",ch1,ch1);
    printf("Charachter is: %c and its ASCII is: %d\n",ch2,ch2);
    printf("Charachter is: %c and its ASCII is: %d\n",ch3,ch3);
    printf("Charachter is: %c and its ASCII is: %d\n",ch4,ch4);
    printf("Charachter is: %c and its ASCII is: %d\n",ch5,ch5);
}

int main()
{
    Display_ASCII();

    return 0;
}