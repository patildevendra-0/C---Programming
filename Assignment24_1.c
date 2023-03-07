#include<stdio.h>

void Display_ASCII_Table()
{
    printf("____________________________________________________________");
    printf("_______________________ASCII-TABLE__________________________\n");
    printf(" CHARACHTER\t DECIMAL\t HEXADECIMAL\t OCTAL");

    int iCnt = 0;
    for(iCnt = 0;iCnt<=255;iCnt++)
    {
        printf("%c\t %d\t %x\t %o\n",iCnt,iCnt,iCnt,iCnt);
    }
    printf("____________________________________________________________");
}

int main()
{
    Display_ASCII_Table();

    return 0 ;
}