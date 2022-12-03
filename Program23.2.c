//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept number from user and check  it is Capital or not
//
// input = F
// output = True
// Input = d
// Output = False
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
   if((ch >= 'A') && (ch <= 'Z'))
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

  bRet = ChkCapital(cValue);

  if(bRet == true)
  {
    printf("It is Capital character");
  }
  else
  {
    printf("It is not Capital character");
  }

  return 0;
}