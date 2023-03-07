#include<stdio.h>

int Count_Diff(char *ptr)
{
    int iCnts = 0 ,i = 0,iCntc = 0;
    while(ptr[i]!='\0')
    {
        if((ptr[i]>='A')&&(ptr[i]<='Z'))
        {
            iCntc++;
        }
        else
        {
            iCnts++;
        }
        i++;
    }
    return iCnts-iCntc;
}

int main()
{
    char Brr[20];
    int iRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n']s",Brr);

    iRet = Count_Diff(Brr);
    printf("Differnce between small and capital letter is :%d\n",iRet);

    return 0;
}