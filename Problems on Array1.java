//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept N number from user and Display all Such  
//                     elements which are Divisble by 5;
//  
// input = 6  Elements 85 66 3 80 93 88
// output = 85
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Program31_2
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number of elements that you want");
      int iSize = sobj.nextInt();

      int Arr[] = new int[iSize];

      System.out.println("Enter the elemets");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }

      System.out.println("Number of elements are");
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if(Arr[iCnt] % 5 == 0)
         {
            System.out.println("the elemets divisible by  5 are :"+Arr[iCnt]);
         }
      }
   }
}
