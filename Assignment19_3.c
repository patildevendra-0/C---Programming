#include<stdio.h>

void Display_Pattern(int iRow,int iCol)
{
    int i = 0,j = 0;

    for (i=1;i<=iRow;i++)
    {
        for(j=iCol;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter number of column:");
    scanf("%d",&iValue2);

    Display_Pattern(iValue1,iValue2);
    return 0;
}