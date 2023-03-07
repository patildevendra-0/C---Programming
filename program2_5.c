#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckEvenorOdd(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = CheckEvenorOdd(iValue);
    if(bRet == TRUE)
    {
        printf("%d is Even Number\n.",iValue);
    }
    else
    {
        printf("%d is Odd Number\n.",iValue);
    }


    return 0;
}