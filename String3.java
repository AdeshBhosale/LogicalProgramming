//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept string from user and check whether it contains
//                     vowel in it or not
// 
// input = marvellous
// output = true
// input = xyz
// output = false
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class StringDemo
{
   public boolean CheckVowel(String str)
   {
      boolean bFlag = false;

      for(int i = 0; i < str.length(); i++)
      {
         if((str.charAt(i) == 'A')||(str.charAt(i) == 'E')||(str.charAt(i) == 'I')||(str.charAt(i) == 'O')||(str.charAt(i) == 'U')||
            (str.charAt(i) == 'a')||(str.charAt(i) == 'e')||(str.charAt(i) == 'i')||(str.charAt(i) == 'o')||(str.charAt(i) == 'u'))
            {
              bFlag = true;
              break;
            }
      }
      return bFlag;
   }
}

class Program30_4
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String :");
      String str = sobj.nextLine();

      StringDemo obj = new StringDemo();

      boolean bRet = obj.CheckVowel(str);

      if(bRet == true)
      {
         System.out.println("String contain Vowel..");
      }      
      else
      {
         System.out.println("String not contain Vowel..");
      }
      
   }
}