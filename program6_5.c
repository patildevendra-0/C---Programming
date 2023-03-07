#include<stdio.h>

float Percentage(float fValue1,float fValue2)
{
    float fAns = 0;
    fAns = fValue2*100/fValue1;
    if(fAns==0)
    {
        printf("Result is Fail");
    }
    return fAns;
}
int main()
{
    int iTotal_Marks = 0;
    int iObtained_Marks = 0;
    float fRet = 0;

    printf("enter the total marks:");
    scanf("%d",&iTotal_Marks);

    printf("enter the Obtained marks:");
    scanf("%d",&iObtained_Marks);

    fRet = Percentage(iTotal_Marks,iObtained_Marks);
    printf("Percentage of student:%f",fRet);
    


    return 0;
}