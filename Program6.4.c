#include<stdio.h>

int Multipy(int iNo1, int iNo2, int iNo3)
{
  int iAns = 0;

  iAns = iNo1 * iNo2 * iNo3;

  return iAns;
}
int main()
{
  int iValue1 = 0;
  int iValue2 = 0;
  int iValue3 = 0;

  int iRet = 0;

  printf("Enter Number : \n");
  scanf("%d",&iValue1); 

  printf("Enter Number : \n");
  scanf("%d",&iValue2);

  printf("Enter Number : \n");
  scanf("%d",&iValue3);

  iRet = Multipy(iValue1,iValue2,iValue3);

  printf("Multiplication is %d",iRet);

  return 0;
}