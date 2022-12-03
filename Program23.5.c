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

void DisplaySchedule(char ch)
{
    {
         switch (ch)
      {
         case 'A':
         case 'a':
         printf("Your exam at 7 Am\n");
         break;

         case 'B':
         case 'b':
         printf("Your exeam at 8.30 Am\n");
         break;

         case 'C':
         case 'c':
         printf("Your exeam at 9.30 Am\n");
        break;

         case 'D':
         case 'd':
         printf("Your exeam at 10.30 Am\n");
         break;

         default:
         printf("Invalid Number");
         break;
      }
    }
}

int main()
{ 
  char cValue = '\0';

  printf("Enter the character \n");
  scanf("%c",&cValue);

 DisplaySchedule(cValue);


  return 0;
}