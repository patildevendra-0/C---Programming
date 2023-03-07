#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 2

BOOL CheckEqual(int iValue1,int iValue2)
{
    if(iValue1==iValue2)
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
    int iNo1 = 0;
    int iNo2 = 0;
    BOOL bRet = FALSE;
    printf("Please enter first number:");
    scanf("%d",&iNo1);

    printf("Please enter secound number:");
    scanf("%d",&iNo2);
    
    bRet = CheckEqual(iNo1,iNo2);
    if(bRet==TRUE)
    {
        printf("Both numbers are Equal");
    }
    else
    {
        printf("Both numbers are Different");
    }


    return 0;
}