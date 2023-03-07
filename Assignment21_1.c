#include<stdio.h>


void Display_Pattern(int iRow ,int iCol)
{
    int i = 0, j = 0;
    int iNo1 =1;
    int iNo2 =1;
    for(i = 1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
           if(iNo1<=9)
           {
            printf("%d\t",iNo1);
           }
           else
           {
            printf("%d\t",iNo2);
            iNo2++;
           }
           iNo1++;
        }
        printf("\n");
    }
    

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of rows:");
    scanf("%d",&iValue1);

    printf("Enter Number of column:");
    scanf("%d",&iValue2);

    Display_Pattern(iValue1,iValue2);
    return 0;
}