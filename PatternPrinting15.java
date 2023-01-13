//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Write java program which accept number of rows and number of columns
//                     from user and display below pattern
//
// input =  Hello
// output =  H
//           H  e
//           H  e   l   
//           H  e   l   l
//           H  e   l   l   o
//           H  e   l   l   
//           H  e   l   
//           H  e   
//           H
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;
 
class Pattern
{
   public void Pattern(String str)
   {
      int iSize = str.length();
      for(int i = 0; i < iSize; i++)
      {
         for(int j = 0; j < i; j++)
         {
            System.out.print(str.charAt(j) +"\t");
         }  
         System.out.println();           
      }
        int iNo = str.length();
      for(int i = 0; i < iNo; i++)
      {
         for(int j = 0; j < iNo-i; j++)
         {
            System.out.print(str.charAt(j) +"\t");
         }  
         System.out.println();           
      }
   }  
}
class Program38_5
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