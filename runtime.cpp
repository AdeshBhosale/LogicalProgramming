#include<iostream>
using namespace std;

class Base
{
    public:     // access specifier
      int A,B;

      void fun()   // function defination
        {
            cout<<"Base fun\n";
        }
        void gun(int i)  //function defination
        {
            cout<<"Base gun with 1 integer\n";
        }
        void gun(int i, int j)  //overloaded function defination
        {
            cout<<"Base gun with 2 integer\n";
        }

};

class Derived : public Base
{
    public:
      int X,Y;
      void sun()
      {
        cout<<"Derived sun\n"; // function defination
      }
      void fun()               // function redefination
      {
        cout<<"Derived fun\n";
      }


};

int main()
{
   Derived dobj;
   Base bobj;

   dobj.fun();
   dobj.gun(11);
   dobj.gun(11,21);
   dobj.sun();
   bobj.fun();
    return 0;
}