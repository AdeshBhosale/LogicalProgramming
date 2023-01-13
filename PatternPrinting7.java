//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  Hello
// output =  H  e   l   l   o
//           H  e   l   l   o
//           H  e   l   l   o
//           H  e   l   l   o
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
   public void Pattern(String str)
   {
  
      for(int i = 0; i < str.length()-1; i++)
      {
         for(int j = 0; j < str.length(); j++)
         {
            System.out.print(str.charAt(j) +"\t");
         
         }
         System.out.println(); 
               
      }
   }
}
class Program38_1
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