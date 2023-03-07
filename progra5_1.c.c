#include<stdio.h>


int DisplayFactorsDiff (int iNo)
{
    int iCnt = 0,iSum1= 0,iSum2= 0;
        for(iCnt=1;iCnt<(iNo);iCnt++)
        {
            if(iNo%iCnt==0)
            {
                iSum1 = iSum1+iCnt;
                
            }
            else
            {
                iSum2 = iSum2+iCnt; 
                

            }
            
        }
        return iSum1-iSum2;
    
}
int main()
{

    int iValue = 0, iRet = 0;
    printf("Enter the Value:");
    scanf("%d",&iValue);

    iRet = DisplayFactorsDiff(iValue);
    printf("the Differnce is :%d\t",iRet);
   

    return 0;
}