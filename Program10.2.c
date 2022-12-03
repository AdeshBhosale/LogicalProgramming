#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
   float Area = 0.0;

   Area = fWidth * fHeight;

   return Area; 

}

int main()
{
   float fValue1 = 0.0;
   float fValue2 = 0.0;
   double bRet = 0.0;

   printf("Enter Width : \n");
   scanf("%f",&fValue1);

   printf("Enter Height : \n");
   scanf("%f",&fValue2);

   bRet = RectArea(fValue1 , fValue2);

   printf("Area  of Rectangle is : %f\n",bRet);

   return 0;
}