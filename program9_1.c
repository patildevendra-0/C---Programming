#include<stdio.h>

void Display_Pattern(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 0;iCnt<iNo ;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    printf("enter the number:");
    scanf("%d",&iValue);

    Display_Pattern(iValue);

    return 0 ;
}