//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept steing from user and reverse the contents of that string
//                     by toggling the case
//
// input =  aCBdef
// output =  FEDcbA;
// input =
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class StringDemo
{
   public String Toggle(String str)
   {
      String str2 = "";

      for(int i = 0; i < str.length(); i++)
      {
         if(Character.isUpperCase(str.charAt(i)))
         {
            str2 = str2 + Character.toLowerCase(str.charAt(i));
         }
         else
         {
            str2 = str2 + Character.toUpperCase(str.charAt(i));
         }
      }
      return str2;
   }
   
}

class Program35_4
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String");
      String str = sobj.nextLine();

      StringDemo obj = new StringDemo();

      String iRet = obj.Toggle(str);

      System.out.println(iRet);

   }
}