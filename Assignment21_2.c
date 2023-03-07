#include<stdio.h>

void Display_Pattern(int iRow ,int iCol)
{
    int i = 0, j= 0;
    int iNo = 2;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if (i%2==0)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                printf("%d\t",i);
                i++;
        
            }
            
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows:");
    scanf("%d",&iValue1);

    printf("Enter the number of column:");
    scanf("%d",&iValue2);

    Display_Pattern(iValue1,iValue2);

    return 0 ;
}