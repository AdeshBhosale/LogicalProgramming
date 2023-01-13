//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and return the
//                     Count of Digits in betwwen 3 and 7
//  
// input = 2395
// output = 1
// input =1018 
// output = 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Digits
{
    public int CountRange(int iNo)
    {
       int iDigit = 0;
       int iCnt = 0;

       while(iNo != 0)
       {
         iDigit = iNo % 10;
         
         if((iDigit > 3)&&(iDigit < 7))
         {
            iCnt++;
         }
         iNo = iNo / 10;
       }
       return iCnt;
    }
}

class Program33_3
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number that you want");
      int iNo = sobj.nextInt();

      Digits obj = new Digits();

      int iRet = obj.CountRange(iNo);

      System.out.println("Digits in Between 3 and 7 are : "+iRet);
   }
}
