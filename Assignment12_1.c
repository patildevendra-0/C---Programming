#include<stdio.h>

void Display_Digit_Rev(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    
    if(iNo<0)
    {
        iNo =-iNo;
    }
    while(iNo!=0)
    {
        iDigit = iNo%10;
        iRev = (iRev*10)+iDigit;
        iNo = iNo/10;
    }
    printf("Reverse digits are  :%d\n",iRev);
}
int main()
{
    int iValue = 0;
    printf("Enter the value:");
    scanf("%d",&iValue);

    Display_Digit_Rev(iValue);

    return 0;
}