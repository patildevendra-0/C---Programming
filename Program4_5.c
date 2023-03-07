#include<stdio.h>

void DisplayDifference(int iNo1,int iNo2)
{
    printf("%d",iNo1-iNo2);
}
int DisplayNonFactors(int iNo)
{
    int iCnt = 0,iSum1= 0,iSum2= 0;
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
    {
        if(iNo%iCnt==0)
        {
            iSum1 = iSum1+iCnt;
        }

    }
    printf("%d",iSum1);
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum2 = iSum2+iCnt;
        }

    }
    printf("%d",iSum2);
    DisplayDifference(iSum1,iSum2);
}
int main()
{

    int iValue = 0 ,iRet = 0;
    printf("Enter the Value:");
    scanf("%d",&iValue);

    iRet = DisplayNonFactors(iValue);
   

    return 0;
}