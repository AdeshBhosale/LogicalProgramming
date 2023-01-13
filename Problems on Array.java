//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept N number from user and return Difference between Summation of 
//                     Even elements and Summation of Odd Elements
//  
// input = 6  Elements 85 66 3 80 93 88
// output = 53 (234-181)
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Numbers
{
    public int Arr[];

    public Numbers(int iSize)
    {
       Arr = new int[iSize];
    }
      public void Accept()
      {
         Scanner sobj = new Scanner(System.in);

         System.out.println("Enter the elemets :");
         {
            for(int iCnt = 0; iCnt < Arr.length; iCnt++)
            {
               Arr[iCnt] = sobj.nextInt();
            }  
         }
      }

       public void Display()
      {
         System.out.println("Elements of array are:");
         {
            for(int iCnt = 0; iCnt < Arr.length; iCnt++)
            {
               System.out.print(Arr[iCnt]+"\t");
            }  
         }
         System.out.println();
      }

      public int Difference()
      {
         int Even = 0;
         int Odd = 0;
         for(int iCnt = 0; iCnt < Arr.length; iCnt++)
         {
            if(Arr[iCnt] % 2 == 0)
            {
               Even = Even + Arr[iCnt];
            }
            else
            {
              Odd = Odd + Arr[iCnt];
            }
         }
         return Even - Odd;
      }
}
class Program31_1
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number of elements that you want");
      int iSize = sobj.nextInt();

      Numbers nobj = new Numbers(iSize);

      nobj.Accept();
      nobj.Display();
      int iRet = nobj.Difference();
      System.out.println("Difference between sum and odd elemets :"+iRet);
   }
}