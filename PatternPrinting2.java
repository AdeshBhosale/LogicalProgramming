//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 4 iCol = 4
// output =  A   B   C   D
//           a   b   c   d
//           A   B   C   D
//           a   b   c   d 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
      char ch = 'a';
      char ch1 = 'A';
      for(int i = 1; i <= iRow; i++)
      {
         ch = 'a';
         ch1 = 'A';
         
         for(int j = 1; j <= iCol; j++)
         {
            if( i % 2 == 0)
            {
               System.out.print(ch+"\t");
               ch++;
            }
            else
            {
               System.out.print(ch1+"\t");
               ch1++;
            }
         }
         System.out.println();
         
      }
   }
}
class Program36_2
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the number of Rows :");
      int iValue1 = sobj.nextInt();

      System.out.println("Enter the number of Columns :");
      int iValue2 = sobj.nextInt();

      Pattern obj = new Pattern();

      obj.Pattern(iValue1,iValue2);


   }
}