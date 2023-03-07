#include<stdio.h>


int Check_Diff(int iNo1)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    
    if(iNo1<0)
    {
        iNo1 =-iNo1;
    }
    while(iNo1!=0)
    {
        iDigit = iNo1%10;
        if(iDigit%2==0)
        {
            iEvenSum = iEvenSum+iDigit;
        }
        else
        {
            iOddSum = iOddSum+iDigit;
        }
        iNo1 = iNo1/10;
    }
    return iEvenSum-iOddSum;
    
}
int main()
{
    int iValue1 = 0;
    int iRet = 0 ;
    printf("Enter the value:");
    scanf("%d",&iValue1);

    iRet = Check_Diff(iValue1);
    printf("Difference between summation of even and summation of odd:%d\n",iRet);
    return 0;
}