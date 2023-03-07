#include<stdio.h>

int DisplayNonFactors(int iNo)
{
    int iCnt = 0,iSum= 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iNo%iCnt!=0)
        {
            iSum = iSum+iCnt;
        }

    }
    return iSum;
}
int main()
{

    int iValue = 0 ,iRet = 0;
    printf("Enter the Value:");
    scanf("%d",&iValue);

    iRet = DisplayNonFactors(iValue);
    printf("Addition of non factors is:%d\n",iRet);

    return 0;
}