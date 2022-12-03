#include<stdio.h>

double SquareMeter(int iNo)
{
    float fMeter = 0;

    fMeter = 0.0929 * iNo;

    return fMeter;
}

int main()
{
   int iValue = 0;
   double bRet = 0.0;

   printf("Area in Square feet : \n");
   scanf("%d",&iValue);

   bRet = SquareMeter(iValue);

   printf("Area of Square in meter is : %f",bRet);

   return 0;
}