
#include<stdio.h>
#include<stdlib.h>

int Last_Occurance(int *Arr,int iSize,int iNo)
{
    int iCnt = 0;
    int iFreCnt = 0;
    for(iCnt= iSize;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            iFreCnt++;
            break;
        }
    }
    if(iFreCnt == 0)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iValue = 0;
    int iRet = 0;


    printf("Enter how many elements you want to store:");
    scanf("%d",&iSize);

    Arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements:\n");
    int iCnt = 0;
    for(iCnt= 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    printf("Enter the value:");
    scanf("%d",&iValue);

    iRet = Last_Occurance(Arr,iSize,iValue);
    if(iRet == -1)
    {
        printf("Number is not present in array");
    }
    else
    {
        printf("%d",iRet);
    }

    free(Arr);
    return 0;
}