//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept N number from user and Display all Such  
//                     elements which are Even And  Divisble by 5;
//  
// input = 6  Elements 85 66 3 80 93 88
// output = 80
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class ArrayX
{
   int Arr[];

   ArrayX(int iSize)
   {
      Arr = new int[iSize];
   }

    void Accept()
    {
      Scanner sobj= new Scanner(System.in);

      System.out.println("Enter the elements");

      for(int iCnt = 0; iCnt < Arr.length;iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
    }

    void Display()
    {
      
      System.out.println("Elenets of Array are");

      for(int iCnt = 0; iCnt < Arr.length;iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();
    }
    void Difference()
    {
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if((Arr[iCnt]%2 == 0)&&(Arr[iCnt]%5 == 0))
         {
            System.out.print("Even Elements Which are Divisible by 5 is "+Arr[iCnt]+"\t");
         }
      }
    }

}
class Program31_3
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the number of elemets that you want");

      int iSize = sobj.nextInt();

      ArrayX aobj = new ArrayX(iSize);

      aobj.Accept();
      aobj.Display();
      aobj.Difference();
   }
}
