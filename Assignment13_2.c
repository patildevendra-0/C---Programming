#include<stdio.h>


int Check_Freq_Odd(int iNo1)
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
        if(iDigit%2!=0)
        {
            iDiCnt++;
        }
        iNo1 = iNo1/10;
    }
    return iDiCnt;
    
}
int main()
{
    int iValue1 = 0;
    int iRet = 0 ;
    printf("Enter the value:");
    scanf("%d",&iValue1);

    iRet = Check_Freq_Odd(iValue1);
    printf("Frequency of odd digit in %d is:%d\n",iValue1,iRet);
    return 0;
}