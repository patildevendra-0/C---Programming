#include<stdio.h>

typedef int BOOL ;
#define TRUE 1
#define FALSE 0

BOOL Check(int iNo)
{
    if(iNo%5==0)
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
    BOOL bRet = FALSE ;
    printf("Enter the number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);
    
    if(bRet==TRUE)
    {
        printf("Number is Divisible by 5");
    }
    else
    {
        printf("Number is Not Divisible by 5");
    }
    return 0;

}