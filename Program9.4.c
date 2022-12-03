#include<stdio.h>

int OddFactorial(int iNo)
{
   int iCnt = 0;
   int iSum = 1;

   if(iNo < 0)
   {
    iNo = -iNo;
   }
   
   for(iCnt = 1; iCnt <= iNo; iCnt = iCnt+2)
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

    iRet = OddFactorial(iValue);

     printf("Odd factorial Number is : %d\n",iRet);

    return 0;
}