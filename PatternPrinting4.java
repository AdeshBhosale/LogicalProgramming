//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 4 iCol = 4
// output =  4   4   4   4
//           3   3   3   3
//           2   2   2   2
//           1   1   1   1
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
      char ch = 'a';
      char ch1 = 'A';
      for(int i = iRow; i > 0; i--)
      {
         for(int j = iCol; j > 0; j--)
         {
           System.out.print(i+"\t");
         }
         System.out.println();       
      }
   }
}
class Program36_4
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