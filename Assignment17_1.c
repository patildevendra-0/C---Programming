#include<stdio.h>
#include<stdlib.h>


int Maximum_Number(int *Arr,int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        if(iMax<Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum_Number (Arr,iSize);
    printf("maximum number in array is :%d\n",iRet);
    
    free(Arr);

    return 0;
}