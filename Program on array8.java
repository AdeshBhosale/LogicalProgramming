//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and accept one another
//                     number as NO and return index of last occurrence of that NO
//  
// input = 6 = 85 66 3 66 96 88   NO = 66
// output = 3
// input =6 = 85 66 3 66 96 88   NO = 96
// output = 4
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class ArrayX
{
   public int Arr[];

   public ArrayX(int iSize)
   {
      Arr  = new int[iSize];
   }

   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the elements");
      
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
   }

   public void Display()
   {

      System.out.println("Elementsof array");
      
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();
   }

    public void DisplayRange()  
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the Starting Point");
      int iStart = sobj.nextInt();

      System.out.println("Enter the Ending Point");
      int iEnd = sobj.nextInt();

      System.out.println("Elements in the range are :");

      int iCnt = 0;

      for(iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if((Arr[iCnt] > iStart)&&(Arr[iCnt] < iEnd))
         {
            System.out.print(Arr[iCnt]+"\t");
         }
      }
    }

}
class Program34_4
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number of elements that you ");
      int iSize = sobj.nextInt();

      ArrayX obj = new ArrayX(iSize);

      obj.Accept();
      obj.Display();

      obj.DisplayRange();
   }
}
