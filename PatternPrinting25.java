//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 4 iCol = 4
// output =  1   2   3   4   5  
//           1   2           5
//           1       3       5
//           1           4   5
//           1   2   3   4   5
//           
//          
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
      for(int i = 0; i <= iRow; i++)
      {
         for(int j = 0; j <= iCol; j++)
         {
            if((i == 0)||(i == iRow)||(j == 0)||(j == iCol)||(i == j))
            {
               System.out.print((j+1)+"\t");
            }
            else
            {
               System.out.print(" "+"\t");
            }
         }
         System.out.println();
      }
   }
}
class Program40_5
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
