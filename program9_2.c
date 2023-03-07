#include<stdio.h>

float Doolar_To_Inr(int iNo)
{
    float fAns = 0 ;
    fAns =  81.39*iNo;
    return fAns;
}
int main()
{
    int iValue = 0;
    float fRet= 0;

    printf("enter the number:");
    scanf("%d",&iValue);

   fRet =  Doolar_To_Inr(iValue);
   printf("value in INR :%f\n",fRet);

    return 0 ;
}