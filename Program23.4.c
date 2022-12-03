//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept number from user and check  it is Small or not
//
// input = g
// output = True
// Input = D
// Output = False
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
   if((ch >= 'a') && (ch <= 'z'))
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

  bRet = ChkSmall(cValue);

  if(bRet == true)
  {
    printf("It is Small case character");
  }
  else
  {
    printf("It is not Small case Character");
  }

  return 0;
}