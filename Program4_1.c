#include<stdio.h>

void DisplayMultiplicationFactors(int iNo)
{
    int iCnt = 0;
    int iMul = 1;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iMul = iMul*iCnt;
           
        }
    }
    printf("%d",iMul);
}
int main()
{
    int iValue = 0;
    printf("Enter the Value:");
    scanf("%d",&iValue);

    DisplayMultiplicationFactors(iValue);

    return 0;
}