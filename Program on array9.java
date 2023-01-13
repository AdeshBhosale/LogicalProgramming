//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and return
//                      product of all odd elements
//  
// input = 6 = 15 66 3 66 96 88  
// output = 45
// input =6 = 86 66 4 66 96 88  
// output = 0
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class ArrayX
{
   public int Arr[];

   public ArrayX(int iSize)
   {
      Arr = new int[iSize];
   }
   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Elements");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
   }

    public void Display()
   {
      System.out.println("Elements of Array Are :");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();
   }

   public int Product()
   {
      int iSum = 1;
      int iCnt = 0;
      for(iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if(Arr[iCnt] % 2 != 0)
         {
            iSum = iSum * Arr[iCnt];
         }
      }
      return iSum;
   }
}
class Program34_5
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Number of elements that you want");
      int iSize = sobj.nextInt();

      ArrayX obj = new ArrayX(iSize);

      obj.Accept();
      obj.Display();

      int iRet = obj.Product();

      System.out.println("Product of all Odd elements Are : "+iRet);

   }
}