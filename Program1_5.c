#include<stdio.h>

int Accept(int iNo)
{
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number");
    scanf("%d",&iValue);

    Accept(iValue);

    return 0;
}