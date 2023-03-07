#include<stdio.h>

double Rectangle_Area(float fWidth,float fHeight)
{
    double dArea = 0.0;
    dArea = fWidth*fHeight;
    return dArea;
}
int main()
{
    float fValue1 = 0.0f ,fValue2 = 0.0f;
    double dRet= 0.0;

    printf("enter the width of rectangle:");
    scanf("%f",&fValue1);

    printf("enter the height of rectangle:");
    scanf("%f",&fValue2);

   dRet =  Rectangle_Area(fValue1,fValue2);
   printf("Area of Rectangle is :%lf\n",dRet);

    return 0 ;
}