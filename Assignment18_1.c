#include<stdio.h>

void Display_Pattern(int iNo)
{
    int iCnt = 0;
    char ch = 'A';
    for(iCnt = 1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);
        
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the value :");
    scanf("%d",&iValue);

    Display_Pattern(iValue);

    return 0 ;
}