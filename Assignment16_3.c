#include<stdio.h>
#include<stdlib.h>


int Check_Occurance(int *Arr,int iSize,int iNo)
{
    int iCnt = 0;
    int iFreCnt = 0;
    int iTemp = 0;
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreCnt++;
            iTemp = iCnt;
        }
        
    }
    return iTemp;
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the size of Array\n:");
    scanf("%d",&iSize);
    Arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements\n:");

    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Enter the element to findout the occurance :");
    scanf("%d",&iValue);
    iRet = Check_Occurance(Arr,iSize,iValue);
    printf(" last index of Occurance %d is :%d\n",iValue,iRet);

    free(Arr);

    return 0;
}