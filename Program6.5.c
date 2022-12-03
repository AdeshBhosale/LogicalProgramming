#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
  float fAns = 0;
  fAns = (float) iNo1 / iNo2 * 100;

  return fAns;
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;

  float fRet = 0; 

  printf("Please Enter Obtained Marks : \n");
  scanf("%d",&iValue1);

  printf("Please Enter total Marks : \n");
  scanf("%d",&iValue2);

  fRet = Percentage(iValue1, iValue2);

  printf("Total Percentage are : %f",fRet);

  return 0;
}