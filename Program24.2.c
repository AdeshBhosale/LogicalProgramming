//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  small case to uppercase and upperto lower case
//
// input = Q
// output = q
// Input = m
// Output = M
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

char Display(char ch)
{
   if((ch >= 'A')&&(ch <= 'Z'))
   {
      return ch + 32;
   }
   else if((ch >= 'a')&&(ch <= 'z'))
   {
      return ch - 32;
   }
   else
   {
     return ch;
   }
}

 int main()
 {
    char cValue = '\0';
    char cRet = '\0';
    printf("Enter the character\n");
    scanf("%c",&cValue);

    cRet = Display(cValue);

    printf("character are : %c\n",cRet);

    return 0;

    
 }
