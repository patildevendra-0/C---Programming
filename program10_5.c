#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqmeter = 0.0;
    dSqmeter = 0.0929*iValue;
    return dSqmeter;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("%d area in square feet convert into %lf Square meter ",iValue,dRet);
    return 0 ;
}