#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if(iNo>100)
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
    BOOL bRet = FALSE;
    printf("enter the value:");
    scanf("%d",&iValue);

    bRet = CheckGreater(iValue);
    if(bRet == TRUE)
    {
        printf("Number is Greater");
    }
    else
    {
        printf("Number is Smaller");
    }
    


    return 0;
}