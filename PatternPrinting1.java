//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 4 iCol = 4
// output =  A   B   C   D
//           A   B   C   D
//           A   B   C   D
//           A   B   C   D
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
      char ch = 'A';

      for(int i = 0; i < iRow; i++)
      {
         ch = 'A';
         for(int j = 0; j < iCol; j++)
         {
            System.out.print(ch+"\t");
            ch++;
         }
         System.out.println();
         
      }
   }
}
class Program36_1
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