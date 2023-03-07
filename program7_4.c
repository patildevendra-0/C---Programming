#include<stdio.h>

void Display_Multiple(int iNo)
{
    int iCnt= 0,iMul=0;
    for(iCnt = 1;iCnt<6;iCnt++)
    {
        iMul = iNo*iCnt;
        printf("%d\t",iMul);
    }
}
int main()
{
    int iValue = 0;
    printf("enter the Value:");
    scanf("%d",&iValue);

    Display_Multiple(iValue);

    return 0;
}