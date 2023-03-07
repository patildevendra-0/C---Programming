#include<stdio.h>

float Fh_To_Cs(float fTemp)
{
    float fCelcius = 0.0f;
    fCelcius =((fTemp-32)*5)/9;
    return fCelcius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the tempreture in fahrenheit:");
    scanf("%f",&fValue);

    dRet = Fh_To_Cs(fValue);
    printf("%f fahrenheit tempreture into %lf celcius ",fValue,dRet);
    return 0 ;
}