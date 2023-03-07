#include<stdio.h>

double Circle_Area(float fRadius)
{
    double dArea = 0.0;
    float PI = 3.14f;

    dArea = PI*fRadius*fRadius;
    return dArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet= 0.0;

    printf("enter the number:");
    scanf("%f",&fValue);

   dRet =  Circle_Area(fValue);
   printf("Area of circle is :%lf\n",dRet);

    return 0 ;
}