#include<stdio.h>
#include<stdlib.h>


int Minimum_Number(int *Arr,int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        if(iMin>Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iRet = 0;

    printf("Enter the size of Array\n:");
    scanf("%d",&iSize);
    Arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements:\n");

    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    iRet = Minimum_Number(Arr,iSize);
    printf("Minimum number in array is :%d\n",iRet);
    
    free(Arr);

    return 0;
}