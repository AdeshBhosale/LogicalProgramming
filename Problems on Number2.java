//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and return the
//                     Count of odd digit
//  
// input = 2395
// output = 1
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Digits
{
   public int CountEven(int iNo)
   {

      int iDigit = 0;
      int iCnt = 0;

      while(iNo != 0)
      {
         iDigit = iNo % 10;
         if(iDigit % 2 != 0)
         {
            iCnt++;
         }
         iNo = iNo / 10;
      }
      return iCnt;
   }
}

class Program33_2
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number that you want");
      int iNo = sobj.nextInt();

      Digits obj = new Digits();

      int iRet = obj.CountEven(iNo);

      System.out.println("Count of Odd Number are : "+iRet);
   }
}
