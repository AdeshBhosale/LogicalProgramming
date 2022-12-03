//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  Accept character from user and check whether it is
//                      special symbol or not
// input = %
// output = True
// Input = m
// Output = false
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
   if(ch > 'z')
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

   printf("Enter the character\n");
   scanf("%c",&cValue);

   bRet = ChkSpecial(cValue);

   if(bRet == true)
   {
      printf("It is Special Character");
   }
   else
   {
      printf("It is not a Special Character");
   }
   return 0;
}

