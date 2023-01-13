//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept N number from user and Display all Such  
//                     elements which are  Divisble by 3 and 5;
//  
// input = 6  Elements 85 66 15 80 93 88
// output = 15
// input = 
// output = 
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

      System.out.println("Enter the elements");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
   }

      public void Display()
   {

      System.out.println("Elemnts of Array are");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();
   }

   public void ArrayDemo()
   {
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if(Arr[iCnt] % 11 == 0)
         {
            System.out.println("Elments multiple of 11 are :"+Arr[iCnt]+"\t");
         }
      }
   }
}

class Program31_5
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the elements that you want");
      int iSize = sobj.nextInt();

      ArrayX obj = new ArrayX(iSize);

      obj.Accept();
      obj.Display();
      obj.ArrayDemo();


   }
}
