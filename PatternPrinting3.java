//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  iRow = 3 iCol = 5
// output =  A   A   A   A   A  
//           B   B   B   B   B
//           C   C   C   C   C
//           
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(int iRow, int iCol)
   {
      char ch = 'A';
      for(int i = 1; i <= iRow; i++)
      {  
         for(int j = 1; j <= iCol; j++)
         {
            System.out.print(ch +"\t");
         }
         System.out.println();
         ch++;       
      }
   }
}
class Program36_3
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