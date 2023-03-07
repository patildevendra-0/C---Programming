#include<stdio.h>

int KM_To_Meter(int iNo)
{
    int iAns = 0;
    iAns = iNo*1000;
    return iAns;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the kilometer :");
    scanf("%d",&iValue);

   iRet =  KM_To_Meter(iValue);
   printf("%d Km means %d meter :\n",iValue,iRet);

    return 0 ;
}