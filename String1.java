//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept string from user and count number of
//                     small characters.
// 
// input = Adesh
// output = 4
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class StringDemo
{
   public int CountSmall(String str)
   {
      int iCnt = 0;

      for(int i = 0; i < str.length(); i++)
      {
         if((str.charAt(i) >= 'a')&&(str.charAt(i) <= 'z'))
         {
            iCnt++;
         }
      }
      return iCnt;
   }
}
class Program30_2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String :");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(str);

        System.out.println("Number of samll Letters are "+iRet);

    }
}
