#include<stdio.h>
#include<stdlib.h>


void Display_Digits(int *Arr,int iSize)
{
    int iCnt = 0,iDigit =0;
    int iSum = 0;
        iCnt = 0;
        for(iCnt =0;iCnt<iSize;iCnt++)
        {
            while(Arr[iCnt]>0)
            {
                iDigit = Arr[iCnt]%10;
                iSum = iSum+iDigit;
                Arr[iCnt] = Arr[iCnt]/10;

            }   
            printf("%d\n",iSum);
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
    printf("Enter the elements:\n");

    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    Display_Digits(Arr,iSize);
    
    
    free(Arr);

    return 0;
}