#include<stdio.h>

int KMtoMeter(int iNo)
{
  int iCnt = 0;
  int iMeter = 1;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iMeter = 1000 * iCnt;
    }
   return iMeter;
}

int main()
{
   int iValue = 0;

   int iRet = 0;

   printf("Enter Number : \n");
   scanf("%d",&iValue);

   iRet = KMtoMeter(iValue);

   printf("The Distance in Meter is : %d",iRet);

   return 0;
}