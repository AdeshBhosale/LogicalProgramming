#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0;
   int j = 0;
   int iNo1 = 0;
   char ch = 'a';

   for(i = 1; i <= iRow; i++)
   {
     iNo1 = 1, ch = 'a';
     
     for(j = 1; j <= iCol; j++)
     {  
       if(i % 2 == 0)
       {
         printf("%d\t",iNo1);
         iNo1++;
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

  printf("Enter Number of Rows\n");
  scanf("%d",&iValue1);

  printf("Enter number of Columns\n");
  scanf("%d",&iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}