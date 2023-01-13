//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Problem statement : Accept string from user and count number of
//                     capital characters.
// 
// input = Marvellous Multi OS
// output = 4
// input = 
// output = 
//////////////////////////////////////////////////////////////////////////////////////////////////////////
import java.util.*;

class Strings
{
    public int CountCaptial(String str)
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt < str.length(); iCnt++)
        {
            if((str.charAt(iCnt) >= 'A') && (str.charAt(iCnt) <= 'Z'))
            {
                iSum++;
            }
           
        }
     return iSum;
    }
}
class Program30_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter the String :");
        String Str = sobj.nextLine();

        Strings sobj1 = new Strings();

        int iRet = sobj1.CountCaptial(Str);

        System.out.println("Number of capital letters are :"+iRet);
    }
}
