#include<stdio.h>

double CircleArea(float fRadius)
{
   float PI = 3.14;
   float Area = 0.0;

   Area = PI * fRadius * fRadius;

   return Area; 

}

int main()
{
   float fValue = 0.0;
   double bRet = 0.0;

   printf("Enter Radius : \n");
   scanf("%f",&fValue);

   bRet = CircleArea(fValue);

   printf("Area  of Circle is : %f\n",bRet);

   return 0;
}