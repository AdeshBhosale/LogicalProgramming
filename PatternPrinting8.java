//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 4 iCol = 4
// output =  *   *   *   *
//           *   *   *   *
//           *   *   *   *
//           *   *   *   *
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
       int iNo = 1;
      for(int i = 1; i <= iRow; i++)
      {
         for(int j = 1; j <= iCol; j++)
         {
           System.out.print("*" +"\t");
           
         }
         System.out.println();       
      }
   }
}
class Program37_1
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