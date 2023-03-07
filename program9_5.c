#include<stdio.h>

int Even_Factorial(int iNo)
{
    int iCnt = 0;
    int iEven_Fact = 1;
    int iOdd_Fact = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt= 1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iEven_Fact = iEven_Fact*iCnt;
        }
        else
        {
            iOdd_Fact = iOdd_Fact*iCnt;
        }
    }
    return iEven_Fact - iOdd_Fact;
}
int main()
{
    int iValue = 0;
    int iRet= 0;

    printf("enter the number:");
    scanf("%d",&iValue);

   iRet =  Even_Factorial(iValue);
   printf("Even_Factorial of number :%d\n",iRet);

    return 0 ;
}