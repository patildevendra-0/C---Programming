#include<stdio.h>


void Display_Multiple(int iNo)
{
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0, iFact= 1;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        iFact = iFact*iCnt;
    }
    printf("%d",iFact);
}
int main()
{
    int iValue = 0;
    printf("enter the Value:");
    scanf("%d",&iValue);

    Display_Multiple(iValue);

    return 0;
}