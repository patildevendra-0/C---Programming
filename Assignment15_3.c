#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check_Occurance(int *Arr,int iSize,int iNo)
{
    int iCnt = 0;
    int iEvenCnt = 0 , iOddCnt = 0 ;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
        
    }
    if(iCnt==iSize)
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
    int iSize = 0;
    int *Arr = NULL;
    int iNo = 0;
    bool bRet = 0;

    printf("Enter the how many elements you want store in array:");
    scanf("%d",&iSize);

    Arr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the Elements:\n");
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Enter the value you want check in array:");
    scanf("%d",&iNo);

    bRet = Check_Occurance(Arr,iSize,iNo);
    if(bRet == true)
    {
        printf("%d is present in array \n",iNo);
    }
    else 
    {
        printf("%d is not present in array \n",iNo);
    }
    
    free(Arr);

    return  0;
}