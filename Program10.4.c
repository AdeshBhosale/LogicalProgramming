
#include<stdio.h>

double FhtoCs(float fTemp)
{
   float fCelsius = 0.0;

   fCelsius = (fTemp - 32) * 5/9;

   return fCelsius;
}

int main()
{
   float fValue = 0.0;
   double bRet = 0.0;

   printf("Enter temperatue in fahrenheit \n");
   scanf("%f",&fValue);

   bRet = FhtoCs(fValue);

   printf("Temperature in Celsius is : %f",bRet);
   return 0;

}