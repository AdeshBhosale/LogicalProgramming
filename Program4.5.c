#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       if(iNo % iCnt != 0)
       {
        iSum = iSum - iCnt;
       }
    }
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
       if(iNo % iCnt == 0)
       {
        iSum = iSum + iCnt;
       }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
 
    printf("Difference is : %d\n",iRet);

    return 0;
}