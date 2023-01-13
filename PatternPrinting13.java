//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  Hello
// output =  H
//           H   e
//           H   e   l
//           H   e   l   l
//           H   e   l   l   0
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;
 
class Pattern
{
   public void Pattern(String str)
   {
      
      for(int i = 0; i < str.length(); i++)
      {
         for(int j = 0; j <= i ; j++)
         {
            System.out.print(str.charAt(j) +"\t");
         }  
         System.out.println();           
      }
   }
}
class Program38_3
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the string :");
      String str = sobj.nextLine();

      Pattern obj = new Pattern();

      obj.Pattern(str);
   }
}