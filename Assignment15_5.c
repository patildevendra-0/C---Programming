#include<stdio.h>
#include<stdlib.h>


int Check_Frequency(int *Arr,int iSize,int iNo)
{
    int iCnt = 0;
    int iFreCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreCnt++;
        }
        
    }
    return iFreCnt;
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iNo = 0;
    int iRet = 0;

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

    iRet = Check_Frequency(Arr,iSize,iNo);
    printf("Frequency of %d in array is:%d\n",iNo,iRet);
    
    free(Arr);

    return  0;
}