#include<stdio.h>


int Mul_Digits(int iNo1)
{
    int iDigit = 0;
    int iDiCnt = 0;
    int iMul = 1;
    
    if(iNo1<0)
    {
        iNo1 =-iNo1;
    }
    while(iNo1!=0)
    {
        iDigit = iNo1%10;
        if(iDigit ==0)
        {
            iDigit = 1;
        }
        iMul = iDigit*iMul;
        iNo1 = iNo1/10;
    }
    return iMul;
    
}
int main()
{
    int iValue1 = 0;
    int iRet = 0 ;
    printf("Enter the value:");
    scanf("%d",&iValue1);

    iRet = Mul_Digits(iValue1);
    printf("Multiplication of all digits:%d\n",iRet);
    return 0;
}