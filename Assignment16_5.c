#include<stdio.h>
#include<stdlib.h>


int Odd_product(int *Arr,int iSize)
{
    int iCnt = 0;
    int iMul = 1;

    for(iCnt =0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt])%2 != 0)
        {
            iMul = iMul*Arr[iCnt];
        }
    }
    if(iMul==1)
    {
        return 0;
    }
    else
    {
        return iMul;
    }
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
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

    iRet = Odd_product(Arr,iSize);
    if(iRet==1)
    {
        printf("%d\n",iRet);
    }
    else
    {
        printf("product of odd number is :%d\n",iRet);
    }
    free(Arr);

    return 0;
}