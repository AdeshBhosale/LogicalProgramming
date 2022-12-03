//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement :  if Letter is Capital then display all the character from that number  to Z
//                      and if small then print number in reverse from that number 
// input = Q
// output =  X  Y  Z
// Input = d
// Output =  c b a
//////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

char Display(char ch)
{
   if((ch >= 'A') && (ch <= 'Z'))
   {
      while(ch <= 'Z')
      {
         printf("%c\t",ch);
         ch++;
      }
   }
   else if((ch >= 'a') && (ch <= 'z'))
   {
      while(ch >= 'a')
       {
         printf("%c\t",ch);
          ch--;
       }
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

    return 0;

    
 }
