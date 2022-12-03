#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
 
   char ch = 'A';
   char ch1 = 'a';

   for(i = 1; i <= iRow; i++)
   {
      ch = 'A';
      ch1 = 'a';
      
     for(j = 1; j <= iCol; j++)
     {       
        if(i % 2 == 0)
        {
           printf("%c\t",ch1);
           ch1++;
        }
        else
        {
          printf("%c\t",ch);
          ch++;
        }
        
     }
   printf("\n");
   }
}

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;

  printf("Enter number of elements\n");
  scanf("%d",&iValue1);

  printf("Enter number of elements\n");
  scanf("%d",&iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}