#include<stdio.h>
#include<stdlib.h>


int CheckDiffSumof_Even_Odd(int *Arr,int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2)==0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else 
        {
            iOddSum = iOddSum +Arr[iCnt];
        }
    }
    return iEvenSum - iOddSum;
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iRet= 0;

    printf("Enter the how many elements you want store in array:");
    scanf("%d",&iSize);

    Arr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the Elements:\n");
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    iRet = CheckDiffSumof_Even_Odd(Arr,iSize);
    printf("Differnce between summation of even and odd is:%d\n",iRet);

    free(Arr);

    return  0;
}