#include<stdio.h>


void Display_Pattern(int iRow ,int iCol)
{
    int i = 0, j = 0;
    
    for(i =iRow ;i>=1;i--)
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
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number of rows:");
    scanf("%d",&iValue1);

    printf("Enter Number of column:");
    scanf("%d",&iValue2);

    Display_Pattern(iValue1,iValue2);
    return 0;
}