//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept 2 string from user and check whether contents
//                      of two strings are equals or not
//
// input =  Marvellous Infosystem    Marvellous Infosystem
// output =  true
// input =
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Strings
{
   public boolean StrCmpX(String str1, String str2)
   {
       if(str1.equals(str2))
       {
          return true;
       }
       else
       {
         return false;
       }
   }   
}

class Program35_2
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the First String");
      String str1 = sobj.nextLine();

      System.out.println("Enter the Second String");
      String str2 = sobj.nextLine();

      Strings obj = new Strings();

      boolean bRet = obj.StrCmpX(str1, str2);

      if(bRet == true)
      {
         System.out.println("Both the String are Same");
      }
      else
      {
         System.out.println("Both the String are not Same");
      }

   }
}