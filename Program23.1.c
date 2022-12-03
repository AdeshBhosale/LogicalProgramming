//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept number from user and check  it is Alphabet or not
//
// input = F
// output = True
// Input = &
// Output = False
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
   if((ch >= 'a') && (ch <= 'z') || (ch >= 'A') && (ch <= 'Z'))
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

  bRet = ChkAlpha(cValue);

  if(bRet == true)
  {
    printf("It is character");
  }
  else
  {
    printf("It is not character");
  }

  return 0;
}