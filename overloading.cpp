#include<iostream>

using namespace std;

class overloading
{
   public:
   //Add@2ii
   int Add(int a ,int b)
   {
    cout<<"Addition of 2 integers\n";     // 1000
    return a+b;
    
   }
   //Add@2ff
   float Add(float a, float b)
   {

    cout<<"Addition of float\n";        //2000
    return a+b;

   }
   //Add@2dd
   double Add(double a, double b)
   {

    cout<<"Addition of double\n";       //3000
    return a+b;

   }
   //Add@3iii
   int Add(int a, int b, int c)
   {

    cout<<("Addition of 3 integers\n");    //4000
    return a+b+c;

   }
   //fun@2if
   void fun(int a, float b)
   {}
   //fun@2fi
   void fun(float x, int y)
   {}


};

int main()
{
  overloading obj;
  int i;
  float f;
  double d;

  i = obj.Add(11,21);     //CALL 1000
  cout<<i<<"\n";

  i = obj.Add(11,21,51); //CALL 4000
  cout<<i<<"\n";

  f = obj.Add(10.9f, 89.5f); //CALL 2000
  cout<<f<<"\n";

  d = obj.Add(10.9,89.5); //CALL 3000
  cout<<d<<"\n";  
  return 0;

}






/*

sizeof ('A');    //1
sizeof (11);     //4
sizeof(88.90);   //8
sizeof(88.90f);   //4

int i = 10;           
printf("%d",i);               //10
printf("%d",sizeof(++1));    //4
printf("%d",i);             //10