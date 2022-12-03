#include<stdio.h>

int FactorialDiff(int iNo)
{
   int iCnt = 0;
   int iSum1 = 1;
   int iSum2 = 1;

   if(iNo < 0)
   {
    iNo = -iNo;
   }
   
   for(iCnt = 1; iCnt <= iNo; iCnt = iCnt+2)
   {
      iSum1 = iSum1 * iCnt;
   }
   for(iCnt = 2; iCnt <= iNo; iCnt = iCnt+2)
   {
      iSum2 = iSum2 * iCnt;
   }
   return iSum2 - iSum1;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

     printf("factorial Difference is : %d\n",iRet);

    return 0;
}