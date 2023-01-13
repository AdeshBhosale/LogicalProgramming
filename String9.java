//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept steing from user and check whether the string is pallindrome or not
//                     without considering its case;
//
// input =  1abccBA1;
// output =  true;
// input =
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class StringDemo
{

   public boolean StrPallindrome(String str)
   {
      String str2 = str.toLowerCase();
      String str3 = "";

      for(int i = 0; i < str2.length(); i++)
      {
         char ch = str2.charAt(i);
         str3 = ch + str3;
      }

      if(str2.equals(str3))
      {
         return true;
      }
      else
      {
         return false;
      }
      
   }   
}

class Program35_5
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String");
      String str = sobj.nextLine();

      StringDemo obj = new StringDemo();

      boolean iRet = obj.StrPallindrome(str);

      if(iRet == true)
      {
         System.out.println("String is Pallindrome");
      }
      else
      {
         System.out.println("String is not Pallindrome");
      }


   }
}