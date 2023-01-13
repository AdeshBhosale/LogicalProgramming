//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept 2 string from user and concat N characters of second string after First String
//                   Value of N should be accepted from user   
//  Note :  if third parameter is greater than the size of second string than concat whole string after first string
//
// input =  Marvellous Infosystem    Logic Building  (5) 
// output = Marvellous Infosystem Logic
// input =
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.Scanner;

class Strings
{
   public String Concat(String str1, String str2, int iNo)
   {
       if(iNo >= str2.length())
       {
          return str2;
       }  
   
       String str3 = "";

      for(int i = 0; i < iNo; i++)
      {
         char ch = str2.charAt(i);
         str3 = str3 + ch;
      }
      return str3;
   }   
}
class Program35_1
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the First String :");
      String str1= sobj.nextLine();

      System.out.println("Enter the Second String :");
      String str2= sobj.nextLine();

      System.out.println("Character that you want to concat :");
      int iNo = sobj.nextInt();

      Strings obj = new Strings();

     String str3 = obj.Concat(str1,str2,iNo);

      System.out.println(str1+" "+str3);

   }
}