#include<stdio.h>
#include<stdlib.h>


void Divisible(int *Arr,int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if ((Arr[iCnt]%5)==0)
        {
            printf("%d",Arr[iCnt]);
        }
    }
    
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    

    printf("Enter the how many elements you want store in array:");
    scanf("%d",&iSize);

    Arr = (int*)malloc(iSize*sizeof(int));

    printf("Enter the Elements:\n");
    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Divisible(Arr,iSize);
  
    free(Arr);

    return  0;
}