//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and return the Difference
//                     between summation of even digits and summation of odd digits
//  
// input = 2395
// output = -15 (2-17)
// input =8440
// output = 16
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Digits
{
    public int CountDiff(int iNo)
    {
       int iDigit = 0;
       int iEven = 0;
       int iOdd = 0;

       while(iNo != 0)
       {
         iDigit = iNo % 10;
         
         if(iDigit % 2 == 0)
         {
            iEven = iEven + iDigit;
         }
         else
         {
            iOdd = iOdd + iDigit;
         }

         iNo = iNo / 10;
       }

       return iEven - iOdd;
    }
}

class Program33_5
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number that you want");
      int iNo = sobj.nextInt();

      Digits obj = new Digits();

      int iRet = obj.CountDiff(iNo);

      System.out.println("Difference between Even and Odd Digits Are : "+iRet);
   }
}
