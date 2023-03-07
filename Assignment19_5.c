#include<stdio.h>

void Display_Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;

    for (i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    

    printf("Enter the number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of column:");
    scanf("%d",&iValue2);

    Display_Pattern(iValue1,iValue2);
    return 0;
}