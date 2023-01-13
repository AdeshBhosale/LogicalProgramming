//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and return the
//                     multipication of all Digits
//  
// input = 2395
// output = 270
// input =1018 
// output = 8
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Digits
{
    public int Multiply(int iNo)
    {
       int iDigit = 0;
       int iMult = 1;

       while(iNo != 0)
       {
         iDigit = iNo % 10;

         if(iDigit == 0)
         {
           iDigit = 1;
         }
         
         iMult = iMult * iDigit;
         iNo = iNo / 10;
       }
       return iMult;
    }
}

class Program33_4
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number that you want");
      int iNo = sobj.nextInt();

      Digits obj = new Digits();

      int iRet = obj.Multiply(iNo);

      System.out.println("Multiplication of Digits are : "+iRet);
   }
}
