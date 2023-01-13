//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  Hello
// output =  H   e   l   l   o
//           H   e   l   l   *
//           H   e   l   *   * 
//           H   e   *   *   *
//           H   *   *   *   *
//           H   e   *   *   *  
//           H   e   i   *   *
//           H   e   l   l   *
//           H   e   l   l   o   
//     
//          
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Pattern
{
    public void Pattern(String str)
    {
      for(int i = 0; i < str.length(); i++)
      {
         for(int j = 0; j < str.length()-i; j++)
         {
            System.out.print(str.charAt(j)+"\t");
         }
           for(int k = 0; k < i; k++)
           {
              System.out.print("#"+"\t");
           }
         System.out.println();
      }
      
      for(int l = 0; l < str.length(); l++)
      {
         for(int m = 0; m <= l; m++)
         {
            System.out.print(str.charAt(m)+"\t");
         }
         for(int n = 1; n < str.length()-l; n++)
         {
            System.out.print("#"+"\t");
         }
         System.out.println();
      }
      
    }
}
class Program39_4
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