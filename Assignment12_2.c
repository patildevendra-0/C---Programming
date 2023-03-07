#include<stdio.h>
#include<stdbool.h>

bool Check_Number(int iNo1,int iNo2)
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
    if(iDiCnt==0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false ;
    printf("Enter the value:");
    scanf("%d",&iValue1);

    printf("Enter the value you want check:");
    scanf("%d",&iValue2);

    bRet = Check_Number(iValue1,iValue2);
    if(bRet==true)
    {
        printf("%d digit is present in number %d\n",iValue2,iValue1);
    }
    else
    {
        printf("%d digit is not present in number %d\n",iValue2,iValue1);
    }

    return 0;
}