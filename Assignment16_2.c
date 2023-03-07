#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check_Occurance(int *Arr,int iSize,int iNo)
{
    int iCnt = 0;
    
    
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }

    
}
int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iValue = 0;
    bool bRet = 0;

    printf("Enter the size of Array\n:");
    scanf("%d",&iSize);
    Arr = (int*)malloc(iSize*sizeof(int));
    printf("Enter the elements\n:");

    int iCnt = 0;
    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
    printf("Enter the element to findout the occurance :");
    scanf("%d",&iValue);
    bRet = Check_Occurance(Arr,iSize,iValue);
    if(bRet==true)
    {
        printf("Number is present");
    }
    else
    {
        printf("Number is not present");
    }

    free(Arr);

    return 0;
}