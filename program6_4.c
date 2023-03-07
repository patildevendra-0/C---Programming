#include<stdio.h>

int Multiplication(int iValue1,int iValue2,int iValue3)
{
    int iOutput = 0 ;
    iOutput = iValue1*iValue2*iValue3;
    return iOutput;
}
int main()
{
    int iNo1=0,iNo2=0,iNo3=0;
    int iAns = 0; 

    printf("Enter first number:");
    scanf("%d",&iNo1);

    printf("Enter secound number:");
    scanf("%d",&iNo2);

    printf("Enter third number:");
    scanf("%d",&iNo3);

    iAns = Multiplication(iNo1,iNo2,iNo3);
    printf("Multiplication is:%d",iAns);

    return 0 ;
}