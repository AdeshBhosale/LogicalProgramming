//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept string from user and display it in
//                     reverse order
// 
// input = marvellous
// output = suollevram
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class StringDemo
{
   public void Reverse(String str)
   {
      String str_name = "";

      for(int i = 0; i < str.length(); i++)
      {
         char ch = str.charAt(i);
         str_name = ch + str_name;
      }
      System.out.println("Reverse String is :"+str_name);

   }
}

class Program30_5
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the String :");
      String str = sobj.nextLine();

      StringDemo obj = new StringDemo();

      obj.Reverse(str);

      
   }
}