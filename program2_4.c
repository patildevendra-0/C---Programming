#include<stdio.h>

void Display(int iNo,int iFrequency)
{
    int iCnt = 0;
    for(iCnt =1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d\n",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("enter the value:");
    scanf("%d",&iValue);

    printf("enter the frequency:");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    return 0;
}