#include<stdio.h>

int EvenFactorial(int iNo)
{
   int iCnt = 0;
   int iSum = 1;

   if(iNo < 0)
   {
    iNo = -iNo;
   }
   
   for(iCnt = 2; iCnt <= iNo; iCnt = iCnt+2)
   {
      iSum = iSum * iCnt;
   }
   return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

     printf("Even factorial Number is : %d\n",iRet);

    return 0;
}