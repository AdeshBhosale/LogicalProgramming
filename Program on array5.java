//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept Number from user and accept one another
//                     number as NO check whether NO is Present or not
//  
// input = 6 = 85 66 3 66 96 88   NO = 66
// output = true
// input =6 = 85 66 3 66 96 88   NO = 10
// output = false
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

      System.out.println("Number of elements are");

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         System.out.print(Arr[iCnt]+"\t");
      }
      System.out.println();
    }
    public boolean Check()
    {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Check the number");

      int iNo = sobj.nextInt();

      boolean Flag = false;

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         if(Arr[iCnt] == iNo)
         {
            Flag = true;
            break;
         }
      }
      return Flag;
    }
}

class Program34_1
{
   public static void main(String arg[])
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number of elements that you want ");
      int iSize = sobj.nextInt();

      ArrayX obj  = new ArrayX(iSize);

      obj.Accept();
      obj.Display();

      boolean bRet = obj.Check();
      if(bRet == true)
      {
         System.out.println("Number is Present");
      }
      else
      {
         System.out.println("Number is not Present");
      }
   }
}
