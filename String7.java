//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept 2 string from user and check whether first N contents of two strings are equal or not
//                   NOTE : if third parameter is greater than the size of second string than concat whole string after first string
//
// input =  Marvellous Infosystem    Marvellous logic   10
// output =  true
// input =
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Strings
{
   public boolean StrCmpX(String str1, String str2,int iNo)
   {
      if(str2.length()<iNo)
      {
         System.out.println( str1+str2);
         return false;
      }
      boolean ans = false;

      for(int i = 0; i < iNo; i++)
      {
         if(str1.charAt(i)==(str2.charAt(i)))
         {
            ans = true;
         }
         else
         {
            ans = false;
         }
      }
      return ans;
   }
}
class Program35_3
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the First String");
      String str1 = sobj.nextLine();

      System.out.println("Enter the Second String");
      String str2 = sobj.nextLine();

      System.out.println("Character that you want to c :");
      int iNo = sobj.nextInt();

      Strings obj = new Strings();

      boolean bRet = obj.StrCmpX(str1, str2, iNo);

      if(bRet)
      {
         System.out.println("The String is correct");
      }
      else
      {
         System.out.println("The String is incorrect");
      }
      

   }
}