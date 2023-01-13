//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and accept one another
//                     number as NO and return index of first occurrence of that NO
//  
// input = 6 = 85 66 3 66 96 88   NO = 66
// output = 1
// input =6 = 85 66 3 66 96 88   NO = 12
// output = -1
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
    public int FirstOcc()  
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Check the number");

      int iNo = sobj.nextInt();

      int iCnt = 0;
      int iPos = -1;

      for(iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if(Arr[iCnt] == iNo)
         {
            break;
         }
      }
      if(iCnt == Arr.length)
      {
         return iPos;
      }
      else
      {
         return iCnt;
      }
    }

}
class Program34_2
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number of elements that you ");
      int iSize = sobj.nextInt();

      ArrayX obj = new ArrayX(iSize);

      obj.Accept();
      obj.Display();

      int iRet = obj.FirstOcc();

      System.out.println("First Occerance of No is " +iRet);
   }
}
