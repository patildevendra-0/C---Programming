#include<stdio.h>

void Range_Displayin_Rev(int iStart ,int iEnd)
{
    int iCnt = 0;
    for(iCnt = iEnd;iCnt>=iStart;iCnt--)
    {
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
    Range_Displayin_Rev(iNo1,iNo2);

    return 0;
}