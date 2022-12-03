//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  ASCII table
//
// input = 
// output = 
// Input = 
// Output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

 void DisplayASCII()
{
   int i = 0;

   printf("___________________________\n");
   printf("ASCII table\n");
   printf("___________________________\n");

   printf("Character\t Decimal\t Hexa\t Octal\n");

   for(i = 0; i <= 127; i++)
   {
     printf("%c \t  %d \t  %x \t  %o \t",i,i,i,i);
   } 
   printf("___________________________\n");
   
}

int main()
{
  DisplayASCII();

  return 0;
}
