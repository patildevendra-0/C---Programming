#include<stdio.h>

void Range_Display_Even(int iStart ,int iEnd)
{
    if (iStart>iEnd)
    {
        printf("invalid range");
    }
    int iCnt = 0;
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        printf("%d\t",iCnt);
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    printf("Enter the first number:");
    scanf("%d",&iNo1);

    printf("Enter the Secound number:");
    scanf("%d",&iNo2);
    Range_Display_Even(iNo1,iNo2);

    return 0;
}