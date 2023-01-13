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
   int Arr[];

   public ArrayX(int iSize)
   {
      Arr = new int[iSize];
   }

    public void Accept()
    {
      Scanner sobj= new Scanner(System.in);

      System.out.println("Enter the elements");

      for(int iCnt = 0; iCnt < Arr.length;iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
    }

    public void Display()
    {
      
      System.out.println("Elenets of Array are");

      for(int iCnt = 0; iCnt < Arr.length;iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();
    }
    public void Division()
    {
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if((Arr[iCnt]%3 == 0)&&(Arr[iCnt]%5 == 0))
         {
            System.out.print("Even Elements Which are Divisible by 3 And 5 is : "+Arr[iCnt]+"\t");
         }
      }
    }

}
class Program31_4
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the number of elemets that you want");

      int iSize = sobj.nextInt();

      ArrayX aobj = new ArrayX(iSize);

      aobj.Accept();
      aobj.Display();
      aobj.Division();
   }
}
