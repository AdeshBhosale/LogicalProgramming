//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept string from user and calculate frequecncy between 
//                     small characters and capital character
// 
// input = AdeshBhosale
// output = 10-2 = 8
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class StringDemo
{
   public int CountDiff(String str)
   {
      int iCnt1 = 0;
      int iCnt2 = 0;
      for(int i = 0; i < str.length(); i++)
      {
         if((str.charAt(i) >= 'a')&&(str.charAt(i) <= 'z'))
         {
            iCnt1++;
         }
         else
         {
            iCnt2++;
         }
      }
      return iCnt1 - iCnt2;
       
   }
}

class Program30_3
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String :");
      String str = sobj.nextLine();

      StringDemo obj = new StringDemo();

      int iRet = obj.CountDiff(str);

      System.out.println("The Difference Between Captial And Small is "+iRet);
      
   }
}