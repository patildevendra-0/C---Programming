#include<stdio.h>

int Odd_Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt= 1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2!=0)
        iFact = iFact*iCnt;
        
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet= 0;

    printf("enter the number:");
    scanf("%d",&iValue);

   iRet =  Odd_Factorial(iValue);
   printf("Odd_Factorial of number :%d\n",iRet);

    return 0 ;
}