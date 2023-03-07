#include<stdio.h>
#include<stdlib.h>


int Diff_Max_Min(int *Arr,int iSize)
{
    int iCnt = 0;
    int iMax = 0;
    int iMin = Arr[0];

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
        if(iMin>Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMax-iMin;
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

    iRet = Diff_Max_Min(Arr,iSize);
    printf("Differnce between maximum and minimum is in array  :%d\n",iRet);
    
    free(Arr);

    return 0;
}