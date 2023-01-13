//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 6 iCol = 6
// output =  *    *    *    *    *    *    
//           *                   *    *
//           *              *         *
//           *         *              *
//           *    *                   *
//           *    *    *    *    *    *
//          
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
      for(int i = 1; i <= iRow; i++)
      {
         for(int j = 1; j <= iCol; j++)
         {
           if((i == 1)||(i == iRow)||(j == 1)||(j == iCol)||(i+j == iRow+1))
           {
              System.out.print("*"+"\t");
           }
           else if(i+j > iRow)
           {
              System.out.print("$"+"\t");
           }
           else
           {
              System.out.print("#"+"\t");
           }
         }
         System.out.println();
      }
   }
}
class Program40_4
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the Number of Rows :");
      int iNo1 = sobj.nextInt();

      System.out.println("Enter the Number of Column :");
      int iNo2 = sobj.nextInt();

      Pattern obj = new Pattern();

      obj.Pattern(iNo1, iNo2);

   }
}
