#include<stdio.h>


int Range_Display_Sum(int iStart ,int iEnd)
{
    
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = iStart;iCnt<=iEnd;iCnt++)
    {
      
        iSum = iSum+iCnt;
        
    }
    if((iStart>iEnd)||(iStart<0))
    {
        return -1;
    }
    else
    {
        return iSum;
    }
}
int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    printf("Enter the first number:");
    scanf("%d",&iNo1);

    printf("Enter the Secound number:");
    scanf("%d",&iNo2);
    iRet = Range_Display_Sum(iNo1,iNo2);
    if(iRet != -1)
    {
        printf("Addition of range between %d to %d is:%d\n",iNo1,iNo2,iRet);
    }
    else
    {
        printf("invalid number");
    }
    return 0;
}