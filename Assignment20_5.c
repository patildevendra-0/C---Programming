#include<stdio.h>


void Display_Pattern(int iRow ,int iColu)
{
    int i = 0, j = 0;
    int iNo =1;
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iColu;j++)
        {
           printf("%d\t",iNo);
           iNo++;
        }
        printf("\n");
    }
    

}

int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter Number of rows:");
    scanf("%d",&iValue1);

    printf("Enter Number of column:");
    scanf("%d",&iValue2);

    Display_Pattern(iValue1,iValue2);
    return 0;
}