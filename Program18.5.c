#include<stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  
  printf("Table of %d is : \n",iNo);

  for(iCnt = 1; iCnt <= 8; iCnt++)
  {
     printf("%d\t",iNo * iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number of elements\n");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;
}