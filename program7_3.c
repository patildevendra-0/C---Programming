#include<stdio.h>

void Display_Odd_Num(int iNo)
{
    int iCnt = 0 ;
    for(iCnt = 1; iCnt<(iNo+1);iCnt++)
    {
        if(iCnt%2!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("enter the Value:");
    scanf("%d",&iValue);

    Display_Odd_Num(iValue);

    return 0;
}