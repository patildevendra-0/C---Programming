#include<stdio.h>
#include<stdlib.h>


int Count_Even_odd(int *Arr,int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0 , iOddCnt = 0 ;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]%2==0)
        {
            iEvenCnt++;
        }
        else 
        {
            iOddCnt++;
        }
    }
    return iEvenCnt -iOddCnt;
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
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

    iRet = Count_Even_odd(Arr,iSize);
    printf("Differnce between Frequency of Even and Odd number is:%d\n",iRet);
  
    free(Arr);

    return  0;
}