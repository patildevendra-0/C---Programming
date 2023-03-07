#include<stdio.h>


int Check_Number_Freq(int iNo1,int iNo2)
{
    int iDigit = 0;
    int iDiCnt = 0;
    
    if(iNo1<0)
    {
        iNo1 =-iNo1;
    }
    while(iNo1!=0)
    {
        iDigit = iNo1%10;
        if(iDigit==iNo2)
        {
            iDiCnt++;
        }
        iNo1 = iNo1/10;
    }
    return iDiCnt;
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0 ;
    printf("Enter the value:");
    scanf("%d",&iValue1);

    printf("Enter the value you want check:");
    scanf("%d",&iValue2);

    iRet = Check_Number_Freq(iValue1,iValue2);
    printf("Frequency of number is:%d\n",iRet);
    return 0;
}