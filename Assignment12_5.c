#include<stdio.h>


int Check_Number_Freq(int iNo1)
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
        if(iDigit<6)
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

    iRet = Check_Number_Freq(iValue1);
    printf("Frequency of number which are less than 6 is:%d\n",iRet);
    return 0;
}