#include<stdio.h>

void Display_Pattern(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
        printf("*\t");
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