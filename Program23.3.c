//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept number from user and check  it is Digit or not
//
// input = 7
// output = True
// Input = d
// Output = False
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
   if((ch >= '0') && (ch <= '9'))
   {
      return true;
   }
   else
   {
      return false;
   }

}

int main()
{ 
  char cValue = '\0';
  bool bRet = false;

  printf("Enter the character \n");
  scanf("%c",&cValue);

  bRet = ChkDigit(cValue);

  if(bRet == true)
  {
    printf("It is Digit");
  }
  else
  {
    printf("It is not Digit");
  }

  return 0;
}