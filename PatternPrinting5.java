//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 3 iCol = 4
// output =  1   2   3   4
//           5   6   7   8
//           9   10  11  12
//           13  14  15  16
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
       int iNo = 1;
      for(int i = iRow; i > 0; i--)
      {
         for(int j = iCol; j > 0; j--)
         {
           System.out.print(iNo+"\t");
           iNo++;
         }
         System.out.println();       
      }
   }
}
class Program36_5
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