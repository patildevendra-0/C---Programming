#include<stdio.h>

void Display(int iNo)
{
    
    while(iNo)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}